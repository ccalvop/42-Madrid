/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:16:30 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/03 11:53:27 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** NAME: trim beginning and end of string with the specified characters
**
** DESCRIPTION:
** Allocates (with malloc(3)) and returns a copy of ’s1’ with the
** characters specified in ’set’ removed from the beginning and the end of the
** string.
** Elimina todos los caracteres de la string ’set’ desde el principio y desde 
** el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. La
** string resultante se devuelve con una reserva de malloc(3).
** s1: La string que debe ser recortada.
** set: Los caracteres a eliminar de la string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	i = 0;
	if (s1 != 0 && set != 0)
	{
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
