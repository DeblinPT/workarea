/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguilhe <luguilhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:33:42 by luguilhe          #+#    #+#             */
/*   Updated: 2023/02/15 19:05:26 by luguilhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <stdio.h>
#include <unistd.h>

int	operator(int a, char *c, int b)
{
	int	r;
	int	(*operators[5])(int, int);

	operators[0] = &ft_add;
	operators[1] = &ft_sub;
	operators[2] = &ft_mul;
	operators[3] = &ft_div;
	operators[4] = &ft_mod;
	r = 1;
	if (c[0] == '+')
		r = operators[0](a, b);
	else if (c[0] == '-')
		r = operators[1](a, b);
	else if (c[0] == '*')
		r = operators[2](a, b);
	else if (c[0] == '/')
		r = operators[3](a, b);
	else if (c[0] == '%')
		r = operators[4](a, b);
	return (r);
}

void	do_op(char *n, char *c, char *m)
{
	int	a;
	int	b;
	int	r;

	r = 1;
	a = ft_atoi(n);
	b = ft_atoi(m);
	if (!(c[0] == '+' || c[0] == '-' || c[0] == '/' || c[0] == '%'
			|| c[0] == '*'))
		write(1, "0", 1);
	else if (c[0] == '/' && b == 0)
		write(1, "Stop : division by zero", 23);
	else if (c[0] == '%' && b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		r *= (operator(a, c, b));
		ft_putnbr(r);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
