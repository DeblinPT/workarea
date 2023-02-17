/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:56:34 by rpolaco-          #+#    #+#             */
/*   Updated: 2023/02/17 00:02:48 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else
	{
		if (nb == 0)
			return (1);
		else if (nb > 1)
			res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);
}

#include <stdio.h>
int	main(void)
{
	printf("%i\n",ft_recursive_factorial(19));
	return (0);
}