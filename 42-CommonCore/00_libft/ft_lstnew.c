/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:48:05 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/12 14:09:30 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ 
** se inicializa con el contenido del parámetro ’content’. La variable
** ’next’, con NULL
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nueva;

	nueva = (t_list *)malloc(sizeof(t_list));
	if (nueva == NULL)
		return (NULL);
	nueva->content = content;
	nueva->next = NULL;
	return (nueva);
}
