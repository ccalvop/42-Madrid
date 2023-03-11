/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:56:56 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/08/16 11:04:59 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Preprocessor directive. It is used to prevent the header file 
*from being included multiple times.*/
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/* Preprocessor directive. It is used to include the contents of 
*the header file into the current file.*/
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

/* Preprocessor directive. It is used to define a constant value.*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef FD_MAX
#  define FD_MAX 4096
# endif

char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);

char	*read_to_stash(int fd, char *stash);
char	*get_line(char *stash);
char	*update_stash(char *stash);

char	*get_next_line(int fd);

/* Preprocessor directive. It is used to end the conditional compilation.*/
#endif
