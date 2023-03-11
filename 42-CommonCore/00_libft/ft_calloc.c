/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:57:18 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/01 13:22:59 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdlib.h>
** NAME: memory allocation
**
** DESCRIPTION:
** The calloc() function contiguously allocates enough space for count
** objects that are size bytes of memory each and returns a pointer to the
** allocated memory. The allocated memory is filled with bytes of value
** zero.
** RETURN VALUES
** If successful, calloc(), malloc(), realloc(), reallocf(), and valloc()
** functions return a pointer to allocated memory.  If there is an error,
** they return a NULL pointer and set errno to ENOMEM.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*resul;

	resul = malloc(count * size);
	if (!resul)
		return (0);
	else
	{
		ft_bzero(resul, (count * size));
		return (resul);
	}
}
