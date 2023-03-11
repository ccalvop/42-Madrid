/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:17:48 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/30 18:45:24 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 1)
		resultado *= nb--;
	return (resultado);
}
/*
int	main(void)
{
	printf("el Factorial de %d es: %d\n", 4, ft_iterative_factorial(4));
	printf("el Factorial de %d es: %d\n", -6, ft_iterative_factorial(-6));
	printf("el Factorial de %d es: %d\n", 0, ft_iterative_factorial(0));
}
*/
