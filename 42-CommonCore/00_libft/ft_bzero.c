/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:20:49 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/06/24 12:23:50 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <strings.h>
** NAME: write zeroes to a byte string
**
** DESCRIPTION:
** The bzero() function writes n zeroed bytes to the string s. If n is
** zero, bzero() does nothing.
*/

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = s;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
	s = tmp;
}
/*
int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 2);
	puts(str);
	return (0);
}
*/
