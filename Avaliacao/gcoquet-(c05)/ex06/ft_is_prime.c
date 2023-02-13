/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:52:19 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/13 16:10:34 by adimas-d         ###   ########.fr       */
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

int	main(void)
{
	int	nb = -10;

	while (nb <= 1000)
	{
		if (ft_is_prime(nb) != 0)
			printf("%d, ", nb);
		nb++;
	}
	return (0);
}
