/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:14:03 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/15 10:12:43 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>

int main(void)
{
	int i;
	i = 0;

	while (i < 10)
	{
		printf("factorial of %d is %d\n", i, ft_iterative_factorial(i));
		i++;
	}
}*/
