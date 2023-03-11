/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:54:15 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/31 12:15:09 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	c;

	c = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (c <= nb / 2 && c <= 46341)
	{
		if (c * c == nb)
			return (c);
		c++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("la raiz cuadrada de %d es: %d\n", 36, ft_sqrt(36));
	printf("la raiz cuadrada de %d es: %d\n", 0, ft_sqrt(0));
	printf("la raiz cuadrada de %d es: %d\n", -9, ft_sqrt(-9));
	printf("la raiz cuadrada de %d es: %d\n", 7921, ft_sqrt(7921));
}
*/
/*46341 x 46341 es el  numero max int 2147483647*/
