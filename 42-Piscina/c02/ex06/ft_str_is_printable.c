/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:42:12 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/24 11:51:09 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str_ascii;
	char	*str_noascii;
	char	*str_vacio;

	str_ascii = "!38384>abcRRR";
	str_noascii = "Ñçdd333";
	str_vacio = "";
	printf("-%s- valor %d \n", str_ascii, ft_str_is_printable(str_ascii));
	printf("-%s- valor %d \n", str_noascii, ft_str_is_printable(str_noascii));
	printf("-%s- valor %d \n", str_vacio, ft_str_is_printable(str_vacio));
}
*/
