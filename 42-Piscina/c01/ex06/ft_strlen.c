/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:45:53 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/23 09:47:06 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	longitud;

	longitud = 0;
	while (str[longitud])
		longitud++;
	return (longitud);
}
/*
int	main(void)
{
	char	*c;

	c = "prueba";
	printf("El número de caracteres es %d", ft_strlen(c));
	return (0);
}
*/
