/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:16:06 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/08 13:26:34 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** NAME: extract substring from string
**
** DESCRIPTION:
** Allocates (with malloc(3)) and returns a substring from the string ’s’.
** The substring begins at index ’start’ and is of maximum size ’len’.
** Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
** La substring empieza desde el índice ’start’ y tiene una long máx 'len'.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*rtn;

	if (!s)
		return (0);
	rtn = (char *)malloc(sizeof(*s) * (len + 1));
	if (rtn == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			rtn[j] = s[i];
			j++;
		}
		i++;
	}
	rtn[j] = 0;
	return (rtn);
}
