/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:31:09 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/24 10:17:50 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if ((str[indice] >= 'a' && str[indice] <= 'z')
			|| (str[indice] >= 'A' && str[indice] <= 'Z'))
			indice++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*str_validoy0;
	char	*str_invalido;
	char	*str_vacio;

	str_validoy0 = "abcdefTEXTO";
	str_invalido = "abcd22d";
	str_vacio = "";
	printf("-%s- con valor %d \n", str_validoy0, ft_str_is_alpha(str_validoy0));
	printf("-%s- con valor %d \n", str_invalido, ft_str_is_alpha(str_invalido));
	printf("-%s- con valor %d \n", str_vacio, ft_str_is_alpha(str_vacio));
	return (0);
}
