/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:47:41 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/30 18:57:46 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("el Factorial de %d es: %d\n", 4, ft_recursive_factorial(4));
	printf("el Factorial de %d es: %d\n", -6, ft_recursive_factorial(-6));
	printf("el Factorial de %d es: %d\n", 0, ft_recursive_factorial(0));
}
*/
