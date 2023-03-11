/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:43:48 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/24 10:30:18 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str_mayus;
	char	*str_otro;
	char	*str_vacio;

	str_mayus = "ESENEP";
	str_otro = "dk22KKD";
	str_vacio = "";
	printf("-%s- valor %d \n", str_mayus, ft_str_is_uppercase(str_mayus));
	printf("-%s- valor %d \n", str_otro, ft_str_is_uppercase(str_otro));
	printf("-%s- valor %d \n", str_vacio, ft_str_is_uppercase(str_vacio));
	return (0);
}
*/
