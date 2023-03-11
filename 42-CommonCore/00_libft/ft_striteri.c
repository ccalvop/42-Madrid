/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:17:39 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/03 10:45:28 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** NAME: create new string from modifying string with specified function
**
** DESCRIPTION:
** A cada carácter de la string ’s’, aplica la función ’f’ dando como 
** parámetros el índice de cada carácter dentro de ’s’ y la dirección del 
** propio carácter, que podrá modificarse si es necesario.
** s: La string que iterar.
** f: La función a aplicar sobre cada carácter.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
