/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:59:49 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/23 16:31:51 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
/* dest es destination y scr es source*/
{
	int	indice;

	indice = 0;
	while (src[indice] != '\0')
	{
		dest[indice] = src[indice];
		indice++;
	}
	dest[indice] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	origen[20] = "hola";
	char	destino[20] = "merhaba";
	char	*dest;

	printf("Origen es %s y Destino es %s \n", origen, destino);
	dest = ft_strcpy(origen, destino);
	printf("Origen es %s y Destino es %s \n", origen, destino);
	return (0);
}
*/
