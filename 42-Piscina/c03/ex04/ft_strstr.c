/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:53:03 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/26 10:28:15 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/* Busca cierta subcadena dentro de una cadena de texto */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Paseo de Castellana 200 bingo canoe";
	char	find[] = "bingo";

	printf("%s\n", ft_strstr(str, find));
	return (0);
}
*/
