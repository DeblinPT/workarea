/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:49:41 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/13 15:51:52 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{	
	int	fatorial;

	fatorial = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	nb--;
	while (nb > 1)
	{
		fatorial = fatorial * nb;
		nb--;
	}
	return (fatorial);
}

int	main(void)
{
	printf("%d\n",ft_iterative_factorial(-5));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(3));
	printf("%d\n",ft_iterative_factorial(16));
}
