/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:57:00 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/17 19:11:05 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digito;

	digito = '0';
	while (digito <= '9')
	{
		write(1, &digito, 1);
		digito++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
