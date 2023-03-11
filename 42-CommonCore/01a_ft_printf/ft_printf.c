/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:38:19 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:38:21 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 ** FT_PRINTF_CHECKER
 * -------------
 * It checks the format string for a valid conversion specifier, and 
 * if it finds one, it calls theappropriate function to handle the conversion.
 * 
 * @param s the character that is being checked
 * @param args
 * @param len the length of the string
 * @param i the index of the string
 */
static void	ft_printf_checker(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_string(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int), len);
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putcharacter_length(va_arg(*args, int), len);
	else if (s == '%')
		ft_putcharacter_length('%', len);
	else
		(*i)--;
}

/** 
 ** FT_PRINTF
 * -------------
 * It takes a string and a list of arguments, and prints the string with
 * the arguments inserted in the appropriate places
 * 
 * @param string The string to be printed.
 * 
 * @return The length of the string.
 */
int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_printf_checker(string[i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putcharacter_length((char)string[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}
