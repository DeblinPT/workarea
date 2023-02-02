/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:02:06 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/01/29 18:47:31 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{	
	write (1, &c, 1);
}

void	ft_organize( int a, int b)
{	
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	if (a < 98 || b < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{	
		b = a +1;
		while (b <= 99)
		{
			ft_organize(a, b);
			b++;
		}
		a++;
	}
}

int		main()
{
	ft_print_comb2();
	return (0);
}
