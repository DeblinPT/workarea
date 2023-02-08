/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:01:05 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/08 13:16:51 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_turn_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num > 15)
	{
		ft_turn_hex(num / 16);
		ft_turn_hex(num % 16);
	}
	else
		ft_putchar(hex[num]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	char *cpy;

	cpy = addr;
	i = 0;
	while (i < size || ++i < 16)
	{
		write (1, &addr[i], 16);
		ft_putchar(':');
		ft_putchar(' ');
		while (j < 16)
		{
			/* code */
		}
		
		if (cpy[i] == '\n')
			ft_putchar(cpy[i]);
		else
			ft_turn_hex(cpy[i]);
		i++;
	}
}
