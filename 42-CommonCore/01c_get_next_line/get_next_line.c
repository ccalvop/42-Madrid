/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:56:12 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/08/21 13:14:25 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A header file that contains 
* the prototypes of the functions that we are going to use in our program. */
#include "get_next_line.h"

/*
 ** UPDATE_STR
 * -------------
 * DESCRIPTION
 * It takes the string 'oldstash' and uptade it, deleting the first line of it. 
 * Finds the first newline character, and returns everything after the newline.
 *
 * @param oldstash the string that contains the characters reading from
 * READ_TO_STASH function.
 *
 * @return A pointer to a string. The new updated string with whatever is left
 * from the original minus the line extracted.
 * -------------
 * strlen - counting the number of characters in a string
 */

char	*update_stash(char *oldstash)
{
	int		i;
	int		j;
	char	*upstash;

	i = 0;
	while (oldstash[i] && oldstash[i] != '\n')
		i++;
	if (!oldstash[i])
	{
		free(oldstash);
		return (NULL);
	}
	upstash = (char *)malloc(sizeof(char) * (ft_strlen(oldstash) - i + 1));
	if (!upstash)
	{
		return (NULL);
	}
	i++;
	j = 0;
	while (oldstash[i])
		upstash[j++] = oldstash[i++];
	upstash[j] = '\0';
	free(oldstash);
	return (upstash);
}

/*
 ** GET_LINE
 * -------------
 * DESCRIPTION
 * It takes a string 'str_stash', and returns a string 'line' that contains only
 * the first line of the original string 'stash'.
 *
 * @param str_stash this is the string that contains the characters that
 * have been read from read_to_stash.
 *
 * @return A string of characters that is the next line in the file. Ending in
 * a line break (`\n`) + (`\0`).
 * -------------
 * malloc - allocates memory
 */

char	*get_line(char *str_stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!str_stash[i])
		return (NULL);
	while (str_stash[i] && str_stash[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (str_stash[i] && str_stash[i] != '\n')
	{
		line[i] = str_stash[i];
		i++;
	}
	if (str_stash[i] == '\n')
	{
		line[i] = str_stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

/*
 ** READ_TO_STASH
 * -------------
 * DESCRIPTION
 * Reading from the file descriptor (fd) into a buffer and then adding all runs
 * of buffers (until a newline is detected) to a string (previuos have read).
 *
 * 1- Allocate memory for the buffer (buf) with size of BUFFER SIZE.
 * 2- Checking if the stash contains a newline character. 
 * If it does not,it reads (or continue reading) from the file descriptor
 * and writes it to the buffer (buf) adding a null terminator to the end of the
 * buffer to know where is the end that string. Join the `stash` string (which
 * have stored previous buf writtings) with the `buf` string. 
 * 3- Repeating this until a newline character is detected.
 * It is important to realize that the last buf can or can´t have newline 
 * character, so 'stash' can stored more characters than only the line.
 *
 * @param fd file descriptor
 * @param stash the string from previous runs of get_next_line.
 *
 * @return A pointer to a string 'stash'.
 * -------------
 * strchr - searching for a character in a string
 * strjoin - joining two strings together
 */

char	*read_to_stash(int fd, char *stash)
{
	char	*buf;
	int		nbytes;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	nbytes = 1;
	while (!ft_strchr(stash, '\n') && nbytes != 0)
	{
		nbytes = read(fd, buf, BUFFER_SIZE);
		if (nbytes == -1)
		{
			free(buf);
			free(stash);
			return (NULL);
		}
		buf[nbytes] = '\0';
		stash = ft_strjoin(stash, buf);
	}
	free(buf);
	return (stash);
}

/*
 ** GET_NEXT_LINE 
 * -------------
 * DESCRIPTION
 * This function takes an opened file descriptor and returns its next line.
 * 
 * 1- use READ_TO_STASH function to read from the file descriptor into
 * a buffer and then adding all runs of buffers (until a newline is detected)
 * to a string 'stash' (static char).
 *
 * 2- use GET_LINE function to take from 'stash' string the first line. 
 * 
 * 3- use UPDATE_STASH function to update 'stash' string, the original 'stash'
 * minus 'line' extracted .
 *
 * @param fd the file descriptor
 *
 * @return A line of text from the file descriptor.
 * -------------
 *	If successful, get_next_line returns a string with the full line ending in
 *	a line break (`\n`) when there is one. 
 *	If an error occurs, or there's nothing more to read, it returns NULL.
 */

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stash = read_to_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = get_line(stash);
	stash = update_stash(stash);
	return (line);
}
