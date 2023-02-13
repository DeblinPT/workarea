/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:28:30 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/11 18:12:25 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			ft_putchar('\\');
			c = (int)str[i];
			ft_putchar("0123456789abcdef"[c / 16]);
			ft_putchar("0123456789abcdef"[c % 16]);
		}
		i++;
	}
}



int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}
