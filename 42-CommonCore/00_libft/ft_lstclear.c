/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:00:27 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/13 11:01:02 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo, 
** utilizando la función ’del’ y free(3). 
** Al final, el puntero a la lista debe ser NULL.
** lst: la dirección de un puntero a un nodo. del: un puntero a función 
** utilizado para eliminar el contenido de un nodo.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!del)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		aux = *lst;
		*lst = aux->next;
		free(aux);
	}
	*lst = NULL;
}
