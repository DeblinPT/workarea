/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:15:24 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/09 15:54:48 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEXA "0123456789abcdef"

void	ft_put_printable(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(char a)
{
	write(1, &HEXA[a / 16], 1);
	write(1, &HEXA[a % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 31 && str[i] < 127))
			ft_put_printable(str[i]);
		else
		{
			ft_put_printable('\\');
			ft_put_hexa(str[i]);
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
