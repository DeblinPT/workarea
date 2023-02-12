/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:52:39 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/12 16:42:58 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
int	main(void)
{
	printf("%i\n", ft_iterative_factorial(4));
}
