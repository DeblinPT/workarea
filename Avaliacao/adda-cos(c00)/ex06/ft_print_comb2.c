/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:31:28 by adda-cos          #+#    #+#             */
/*   Updated: 2023/02/16 16:43:48 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	buffer[5];
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			buffer[0] = (a / 10) + '0';
			buffer[1] = (a % 10) + '0';
			buffer[2] = ' ';
			buffer[3] = (b / 10) + '0';
			buffer[4] = (b % 10) + '0';
			write(1, buffer, 5);
			if (!(buffer[0] == '9' && buffer[1] == '8' && buffer[3] == '9'
					&& buffer[4] == '9'))
				write(1, ", ", 2);
			b++;
		}		
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}