/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:29:09 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/31 11:33:00 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}
/*
int	main(void)
{
	printf("la serie fibonacci es: 0 1 1 2 3 5 8 13...\n");
	printf("el 3º elemento de la serie fibonacci es %d\n", ft_fibonacci(3));
	printf("el 4º elemento de la serie fibonacci es %d\n", ft_fibonacci(4));
	printf("el 6º elemento de la serie fibonacci es %d\n", ft_fibonacci(6));
}
*/
