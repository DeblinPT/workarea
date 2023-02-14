/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavieira <mavieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:09:59 by mavieira          #+#    #+#             */
/*   Updated: 2023/02/14 08:25:04 by mavieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

int	operation(int a, char ch, int b)
{
	int	res;

	res = 1;
	if (ch == '+')
		res = ft_add(a, b);
	else if (ch == '-')
		res = ft_sub(a, b);
	else if (ch == '*')
		res = ft_mult(a, b);
	else if (ch == '/')
		res = ft_div(a, b);
	else if (ch == '%')
		res = ft_mod(a, b);
	return (res);
}

int	check_div(char ch)
{
	return (ch == '/' || ch == '%');
}

int	check_op(char ch)
{
	return (ch == '+' || ch == '-' || ch == '*');
}

void	do_op(char *a, char *op, char *b)
{
	int		x;
	int		y;
	char	op_;

	op_ = op[0];
	x = ft_atoi(a);
	y = ft_atoi(b);
	if (check_op(op_) || (check_div(op_)))
	{
		if (check_div(op_) && (y == 0))
		{
			if (op_ == '/')
				write(1, "Stop : division by zero", 23);
			else if (op_ == '%')
				write(1, "Stop : modulo by zero", 21);
		}
		else
			ft_putnbr(operation(x, op_, y));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
