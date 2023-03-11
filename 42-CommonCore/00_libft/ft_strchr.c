/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:41:24 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/06/27 11:43:41 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** NAME: locate character in string (first occurrence)
**
** DESCRIPTION:
** 	The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}
/*
int main()
{
	char str[] = "http://www.spoint.es";
	char c = '.';
	char *ret;

	ret = ft_strchr(str, c);
	printf("String after |%c| is - |%s|\n", c, ret);
	return (0);
}
*/
