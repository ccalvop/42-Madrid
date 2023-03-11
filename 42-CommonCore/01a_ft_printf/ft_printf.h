/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:39:02 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:39:04 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The above code is a preprocessor directive. */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*___(HEADERS-STANDARD C LIBRARIES) CABECERAS___
* The above code is 
* including the header files that are needed for the program to run. */
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

/*___(FUNCTION PROTOTYPES) PROTOTIPOS___
* The above code is a functions prototypes. */

void			ft_putcharacter_length(char character, int *length);
void			ft_string(char *args, int *length);

void			ft_number(int number, int *length);
void			ft_unsigned_int(unsigned int u, int *length);
void			ft_hexadecimal(unsigned int x, int *length, char x_or_x);
void			ft_pointer(size_t pointer, int *length);

int				ft_printf(const char *string, ...);

#endif
