/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:58:27 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/30 20:20:54 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	resultado;

	resultado = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 0)
		resultado *= nb;
	return (resultado);
}
/*
int	main(void)
{
	printf("3 elevado a 2 es %d\n", ft_iterative_power(3, 2));
	printf("2 elevado a -1 es %d\n", ft_iterative_power(2, -1));
	printf("5 elevado a 0 es %d\n", ft_iterative_power(5, 0));
	printf("0 elevado a 0 es %d\n", ft_iterative_power(0, 0));
	printf("-1 elevado a -2 es %d\n", ft_iterative_power(-1, -2));
}
*/
