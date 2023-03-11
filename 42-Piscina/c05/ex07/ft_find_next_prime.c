/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:26:13 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/31 16:05:42 by ccalvo-p         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
int	main(void)
{
	printf("Numeros primos: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37...\n");
	printf("el siguiente numero primo de 15 es: %d\n", ft_find_next_prime(15));
}
*/
