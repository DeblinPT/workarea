/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:39:51 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/01/29 18:46:28 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char value)
{	
	write (1, &value, 1);
}

void	ft_organize(char m, char o, char p)
{
	ft_putchar(m);
	ft_putchar(o);
	ft_putchar(p);
	if (!(m == '7' && o == '8' && p == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	m;
	char	o;
	char	p;

	m = '0';
	while (m <= '7')
	{
		o = m + 1;
		while (o <= '8')
		{
			p = o + 1;
			while (p <= '9')
			{	
				ft_organize(m, o, p);
				p++;
			}
			o++;
		}
		m++;
	}
}

int		main()
{
	ft_print_comb();
	return (0);
}
