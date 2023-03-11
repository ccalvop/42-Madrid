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
	int		i;
	int		fd1;

	/* It opens the file `test.txt` and returns a file descriptor. */
	fd1 = open("test.txt", O_RDONLY);
	i = 1;
	/* A loop that will run until the value of `i` is greater than 7. */
	while (i <= 10)
	{
		/* It prints the line number, the line, and then frees the line. */
		line = get_next_line(fd1);
		if (line == NULL)
			break;
		printf("linea [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	system("leaks a.out");
	return (0);
}
