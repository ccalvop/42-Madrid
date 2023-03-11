/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:17:54 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/03 10:58:47 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdio.h>
** SYNOPSIS: output a character to given file
**
** DESCRIPTION:
** The fputc() function writes the character c (converted to an ``unsigned
** char'') to the output stream pointed to by stream.
** Outputs the character ’c’ to the given file descriptor.
** Envía el carácter ’c’ al file descriptor especificado.
** c: El carácter a enviar. fd: El file descriptor sobre el que escribir.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
