/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:17:28 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/08 13:24:36 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** NAME: create new string from modifying string with specified function
**
** DESCRIPTION:
** Applies the function ’f’ to each character of the string ’s’ to create
** a new string (with malloc(3)) resulting from successive applications of ’f’.
** A cada carácter de la string ’s’, aplica la función ’f’ dando como 
** parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. 
** Genera una nueva string con el resultado del uso sucesivo de ’f’.
** s: La string que iterar. f: La función a aplicar sobre cada carácter.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
