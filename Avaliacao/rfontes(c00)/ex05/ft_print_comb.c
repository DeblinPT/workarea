/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:11:41 by rfontes-          #+#    #+#             */
/*   Updated: 2023/01/29 20:00:28 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	commas(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if ((a == '7' && b == '8' && c == '9') != 1)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				commas(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
}