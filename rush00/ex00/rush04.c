/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:02:16 by acosta-h          #+#    #+#             */
/*   Updated: 2023/01/29 21:03:10 by acosta-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('A');
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	ft_body(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('B');
		while (i < x -1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
	}
}

void	ft_last_line(int x)
{
	int	i;

	if (x > 0)
	{
		i = 1;
		ft_putchar('C');
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
			ft_putchar('A');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (y == 0)
		;
	else if (y == 1)
		ft_first_line(x);
	else if (y == 2)
	{
		ft_first_line(x);
		ft_body(x);
	}
	else
	{
		ft_first_line(x);
		while (i < y - 1)
		{
			ft_body(x);
			i++;
		}
		ft_last_line(x);
	}
}
