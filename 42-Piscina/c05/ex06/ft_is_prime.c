/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:19:51 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/31 16:08:04 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c <= nb / 2 && c <= 46341)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("Numeros primos: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37...\n");
	printf("¿x es numero primo?\nresultado:1-si 0-no\n");
	printf("2: %d\n", ft_is_prime(2));
	printf("17: %d\n", ft_is_prime(17));
	printf("28: %d\n", ft_is_prime(28));
	printf("0: %d\n", ft_is_prime(0));
}
*/
/* dividimos la busqueda en la mitad (busqueda binaria) para evitar time out*/
