/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:42:34 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/01 11:33:46 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** NAME: compare byte string
**
** DESCRIPTION:
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
** RETURN VALUES
** The memcmp() function returns zero if the two strings are identical, oth-
** erwise returns the difference between the first two differing bytes
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
