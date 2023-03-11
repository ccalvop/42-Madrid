/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:47:41 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/07 14:36:52 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** Añade el nodo ’new’ al final de la lista ’lst’.
** lst: el puntero al primer nodo de una lista.
** new: el puntero a un nodo que añadir a la lista.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = (*lst);
	if (*lst)
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
	else
		*lst = new;
}
