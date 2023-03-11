/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:53:56 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/30 11:06:00 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*contador*/
/*signo*/
/*resto*/
/*mientras los caracteres sean espacios*/
/*ascii ht - tab horizontal (9) y cr - carriagereturn retornodecarro (13)*/
/* coge el numero, y suma el anterior <resto> multipilicado por 10)*/

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	s;	
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("   	--+-+-0366695+9+"));
	return (0);
}
*/
