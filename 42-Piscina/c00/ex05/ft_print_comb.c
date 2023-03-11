/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:57:28 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/18 12:02:39 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				write (1, &c, 1);
				write (1, &d, 1);
				write (1, &u, 1);
				if (c != '7' || d != '8' || u != '9')
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}