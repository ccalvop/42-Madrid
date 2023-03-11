/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:18:26 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/03 11:19:37 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** NAME: output string to given file with newline
**
** DESCRIPTION:
** Outputs the string ’s’ to the given file descriptor, followed by a newline.
** Envía la string ’s’ al file descriptor dado, seguido de un salto de línea.
** s: La string a enviar. fd: El file descriptor sobre el que escribir.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != '\0')
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
