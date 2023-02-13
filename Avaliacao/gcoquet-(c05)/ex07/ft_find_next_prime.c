/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:52:23 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/13 16:18:54 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		else
			i = 1 + i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb > 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

int	main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 8;
	int g = 15;
	int h = 578;

	printf("\n Nº dig. %d prox. %d\n", a, ft_find_next_prime(a));
	printf("\n Nº dig. %d prox. %d\n", b, ft_find_next_prime(b));
	printf("\n Nº dig. %d prox. %d\n", c, ft_find_next_prime(c));
	printf("\n Nº dig. %d prox. %d\n", d, ft_find_next_prime(d));
	printf("\n Nº dig. %d prox. %d\n", e, ft_find_next_prime(e));
	printf("\n Nº dig. %d prox. %d\n", f, ft_find_next_prime(f));
	printf("\n Nº dig. %d prox. %d\n", g, ft_find_next_prime(g));
	printf("\n Nº dig. %d prox. %d\n", h, ft_find_next_prime(h));
	return (0);
}