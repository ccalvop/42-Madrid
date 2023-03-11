/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:22:21 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/03 11:38:14 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** NAME: output integer to given file
**
** DESCRIPTION:
** Outputs the integer ’n’ to the given file descriptor.
** Envía el número ’n’ al file descriptor dado.
** n: El número que enviar. fd: El file descriptor sobre el que escribir.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		num = -1 * n;
		ft_putchar_fd('-', fd);
	}
	else
		num = n;
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}
