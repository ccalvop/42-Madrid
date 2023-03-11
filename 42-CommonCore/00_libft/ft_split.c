/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:16:44 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/13 10:10:51 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** NAME: split string, with specified character as delimiter, into an array
**			of strings
**
** DESCRIPTION:
** Allocates (with malloc(3)) and returns an array of strings obtained by
** splitting ’s’ using the character ’c’ as a delimiter. The array must be
** ended by a NULL pointer.i
** Reserva (utilizando malloc(3)) un array de strings resultante de separar 
** la string ’s’ en substrings utilizando el caracter ’c’ como delimitador. 
** El array debe terminar con un puntero NULL.
** s: La string a separar. c: El carácter delimitador.
*/

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	finish;
	size_t	index;
	int		start;
	char	**split;

	if (!s)
		return (0);
	split = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!split)
		return (0);
	finish = 0;
	index = 0;
	start = -1;
	while (finish <= ft_strlen(s))
	{
		if (s[finish] != c && start < 0)
			start = finish;
		else if ((s[finish] == c || finish == ft_strlen(s)) && start >= 0)
		{
			split[index++] = word_dup(s, start, finish);
			start = -1;
		}
		finish++;
	}
	return (split);
}
