/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:15:24 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/07 21:01:34 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] > 127)
		{
			ft_putchar('\\');
			if (str[i] <= 15)
			{
				ft_putchar('0');
				ft_turn_hex(str[i]);
			}
			else
				ft_turn_hex(str[i]);
		}
		ft_putchar(str[i]);
		i++;
	}
}

/*#include <unistd.h>

int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/