/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:39:26 by rpolaco-          #+#    #+#             */
/*   Updated: 2023/02/16 23:59:08 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	res;

	n = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb >= n)
		{
			res *= n;
			n++;
		}
	}
	return (res);
}

int	main(void)
{
	printf("%i\n",ft_iterative_factorial(19));
	return (0);
}