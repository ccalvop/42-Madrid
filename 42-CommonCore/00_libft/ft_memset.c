/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:20:29 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/06/23 16:06:57 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** NAME: fill a byte string with a byte value
**
** DESCRIPTION:
** The memset() function writes len bytes of value c (converted to an
** unsigned char) to the string b.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = b;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (b);
}
