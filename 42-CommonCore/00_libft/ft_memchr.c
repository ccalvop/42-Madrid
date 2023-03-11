/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:42:18 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/01 11:11:42 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** NAME: locate byte in byte string
**
** DESCRIPTION:
** The memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s.
** RETURN VALUES
** The memchr() function returns a pointer to the byte located, or NULL if
** no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	while (n)
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
		n--;
	}
	return (0);
}
