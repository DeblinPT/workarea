/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:49:55 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/13 15:53:49 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fatorial;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 2)
	{
		fatorial = ft_recursive_factorial(nb - 1);
		fatorial = fatorial * nb;
	}
	else
		fatorial = nb;
	return (fatorial);
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(16));
}