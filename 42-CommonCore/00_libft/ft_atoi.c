/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:43:29 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/07/08 11:58:17 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdlib.h>
** SYNOPSIS: convert ASCII string to integer
**
** DESCRIPTION:
** The atoi() function converts the initial portion of the string pointed
** to by str to int representation.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sig;
	unsigned long int	resul;

	i = 0;
	sig = 1;
	resul = 0;
	while (str[i] == ' ' || str[i] == '\n' || str [i] == '\t' || \
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sig *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resul = (resul * 10) + (str[i] - '0');
		i++;
	}
	if (resul > 9223372036854775807 && sig == 1)
		return (-1);
	else if (resul > 9223372036854775807 && sig == -1)
		return (0);
	return (resul * sig);
}
