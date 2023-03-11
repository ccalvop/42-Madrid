/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:39:20 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:39:21 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It writes a -character- to the standard output, and increments 
 * the length of the string that's being written
 * 
 * @param character the character to be printed
 * @param length the length of the string that is being printed
 */
void	ft_putcharacter_length(char character, int *length)
{
	write(1, &character, 1);
	(*length)++;
}

/**
 * It prints a -string-
 * 
 * @param args the string to be printed
 * @param length the length of the string
 * 
 * @return The length of the string.
 */
void	ft_string(char *args, int *length)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*length) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putcharacter_length(args[i], length);
		i++;
	}
}
