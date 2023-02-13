/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:16:58 by rfilipa-          #+#    #+#             */
/*   Updated: 2023/02/11 18:24:54 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;
	int	div;
	int	mod;

	c = *a;
	d = *b;
	div = (c / d);
	mod = (c % d);
	*a = div;
	*b = mod;
}

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 42;
	*b = 10;

	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
	ft_ultimate_div_mod(a, b);
	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
	return (0);
}