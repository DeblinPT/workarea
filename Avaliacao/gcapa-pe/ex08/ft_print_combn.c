/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:23:45 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/01/29 18:50:41 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_length;
char	g_array[10];

void	middle(int prev, int n)
{
	int	i;

	if (n == g_length)
	{
		write(1, g_array, g_length);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - g_length + n)
	{
		g_array[n] = '0' + i;
		middle(i, n + 1);
	}
}

void	ft_last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	g_length = n;
	while (i < 10 - n)
	{
		g_array[0] = '0' + i;
		middle(i++, 1);
	}
	ft_last(i);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
