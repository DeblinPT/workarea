/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:14:42 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/15 19:41:23 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	res *= ft_recursive_factorial(nb - 1);
	return (res);
}

/*int	main(void)
{
	int	res;

	res = ft_recursive_factorial(-5);
	printf("%d\n", res);
	return (res);
}
*/