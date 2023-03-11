/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:52:16 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/24 10:28:17 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] >= '0' && str[indice] <= '9')
			indice++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str_num;
	char	*str_nonum;
	char	*str_vacio;

	str_num = "02155689";
	str_nonum = "018ddd89";
	str_vacio = "";
	printf("-%s- tiene valor %d \n", str_num, ft_str_is_numeric(str_num));
	printf("-%s- tiene valor %d \n", str_nonum, ft_str_is_numeric(str_nonum));
	printf("-%s- tiene valor %d \n", str_vacio, ft_str_is_numeric(str_vacio));
	return (0);
}
*/
