/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:18:53 by rfontes-          #+#    #+#             */
/*   Updated: 2023/01/29 20:01:59 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int c)
{
	int		d;
	int		e;
	char	f;
	char	g;

	d = c / 10;
	e = c % 10;
	f = d + '0';
	g = e + '0';
	write(1, &f, 1);
	write(1, &g, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a);
			write(1, " ", 1);
			print(b);
			if ((a == 98 && b == 99) != 1)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
}