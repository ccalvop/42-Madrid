/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:27:22 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/24 10:29:39 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str_minus;
	char	*str_otro;
	char	*str_vacio;

	str_minus = "abcdefg";
	str_otro = "ad223";
	str_vacio = "";
	printf("-%s- valor %d \n", str_minus, ft_str_is_lowercase(str_minus));
	printf("-%s- valor %d \n", str_otro, ft_str_is_lowercase(str_otro));
	printf("-%s- valor %d \n", str_vacio, ft_str_is_lowercase(str_vacio));
	return (0);
}
*/
