/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:28:59 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/19 19:03:29 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int	*b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 6;
	printf("el valor de a es %d \n", a);
	printf("el valor de b es %d \n", b);
	printf("\n");
	ft_swap(&a, &b);
	printf("el nuevo valor de a es %d \n", a);
	printf("el nuevo valor de b es %d \n", b);
	return (0);
}
*/
