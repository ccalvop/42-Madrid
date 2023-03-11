/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:23:47 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/24 10:25:17 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && (x < n))
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	origen[] = "Arboleda";
	char	destino[] = "Panadero";
	unsigned int	a;

	a = 5;
	printf("Origen es %s y Destino es %s \n", origen, destino);
	ft_strncpy(origen, destino, a);
	printf("Origen es ahora %s y Destino es %s \n", origen, destino);
	return (0);
}
*/
