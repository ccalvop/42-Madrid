/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:49:48 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/08/17 11:49:50 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*line;
	char	*line2;
	int		i;
	int		j;
	int		fd1;
	int		fd2;

	/* It opens the file `test.txt` and returns a file descriptor. */
	fd1 = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	i = 1;
	j = 1;
	/* A loop that will run until the value of `i` is greater than 7. */
	while (i <= 10 && j	<= 10)
	{
		/* It prints the line number, the line, and then frees the line. */
		line = get_next_line(fd1);
		if (line == NULL)
			break;
		printf("linea [%02d]: %s", i, line);
		free(line);
		i++;
		line2 = get_next_line(fd2);
		if (line2 == NULL)
			break;
		printf("linea [%02d]: %s", j, line2);
		free(line2);
		j++;
	}
	close(fd1);
	close(fd2);
	return (0);
}
