/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:10:37 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/15 19:41:28 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 2)
	{
		nb--;
		res *= (nb);
	}
	return (res);
}

/*int	main(void)
{
	int	res;

	res = ft_iterative_factorial(9);
	printf("%d\n", res);
	return (res);
}
*/