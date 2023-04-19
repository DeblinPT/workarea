/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndias-fa <hello@nuno.tech>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:09:39 by ndias-fa          #+#    #+#             */
/*   Updated: 2023/01/29 20:28:25 by ndias-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('o');
		while (i < x - 1)
		{
			ft_putchar('-');
			i++;
		}
		if (x > 1)
			ft_putchar('o');
		ft_putchar('\n');
	}
}

void	ft_body(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('|');
		while (i < x -1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
	}
}

void	ft_last_line(int x)
{
	int	i;

	if (x > 0)
	{
		i = 1;
		ft_putchar('o');
		while (i < x - 1)
		{
			ft_putchar('-');
			i++;
		}
		if (x > 1)
			ft_putchar('o');
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
