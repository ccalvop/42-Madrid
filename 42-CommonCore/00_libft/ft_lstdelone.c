/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:22:48 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/08 12:52:08 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** Toma como parámetro un nodo ’lst’ y libera la memoria del contenido 
** utilizando la función ’del’ dada como parámetro, además de liberar 
** el nodo.La memoria de ’next’ no debe liberarse.
** lst: el nodo a liberar. del: un puntero a la función utilizada para 
** liberar el contenido del nodo.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
