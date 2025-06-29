/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:03:46 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/02 18:05:28 by adimas-d         ###   ########.fr       */
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

/*
int		main()
{
	ft_print_comb2();
	return (0);
}*/
