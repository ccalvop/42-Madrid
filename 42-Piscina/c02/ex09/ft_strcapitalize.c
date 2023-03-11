/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:56:12 by ccalvo-p          #+#    #+#             */
/*   Updated: 2022/05/24 18:13:17 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + 32;
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;	

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& ((str[i - 1] >= 32 && str[i - 1] <= 47)
				|| (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| (str[i - 1] >= 91 && str[i - 1] <= 96)
				|| (str[i - 1] >= 123 && str[i - 1] <= 126)))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str_prueba[] = "salUdos, qUe tal estas? 42monoS TIenes+uno";

	printf("%s cambia a \n", str_prueba);
	ft_strlowcase(str_prueba);
	printf("%s cambia a \n", str_prueba);
	printf("%s", ft_strcapitalize(str_prueba));
	return (0);
}
