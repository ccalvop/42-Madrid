/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:39:31 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:39:32 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It takes a number and prints it to the screen - ft_putnbr
 * 
 * @param number the number to be printed
 * @param length the length of the string
 * 
 * @return The length of the string.
 */
void	ft_number(int number, int *length)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*length) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putcharacter_length('-', length);
		ft_number(number * -1, length);
	}
	else
	{
		if (number > 9)
			ft_number(number / 10, length);
		ft_putcharacter_length(number % 10 + '0', length);
	}
}

/**
 * It takes a pointer, and prints it in hexadecimal - pointer
 * 
 * @param pointer the pointer to print
 * @param length the length of the string
 * 
 * @return The length of the string.
 */
void	ft_pointer(size_t pointer, int *length)
{
	char	string[25];
	int		i;
	char	*base_character;

	base_character = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*length) += 2;
	if (pointer == 0)
	{
		ft_putcharacter_length('0', length);
		return ;
	}
	while (pointer != 0)
	{
		string[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putcharacter_length(string[i], length);
	}
}

/**
 * It converts an unsigned integer to a hexadecimal string and prints it 
 * - hexadecimal - x or X
 * 
 * @param x the number to be converted
 * @param length the length of the string
 * @param x_or_x This is the character that will be used to determine whether 
 * the hexadecimal number will be in lowercase or uppercase.
 * 
 * @return The length of the string.
 */
void	ft_hexadecimal(unsigned int x, int *length, char x_or_x)
{
	char	string[25];
	char	*base_character;
	int		i;

	if (x_or_x == 'X')
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putcharacter_length('0', length);
		return ;
	}
	while (x != 0)
	{
		string[i] = base_character [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putcharacter_length(string[i], length);
}

/**
 * It prints an unsigned int.
 * 
 * @param u the unsigned int to be printed
 * @param length the length of the string
 */
void	ft_unsigned_int(unsigned int u, int *length)
{
	if (u >= 10)
		ft_unsigned_int(u / 10, length);
	ft_putcharacter_length(u % 10 + '0', length);
}
