/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:50:25 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/13 15:56:31 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		a = nb * a;
		power--;
	}
	return (a);
}

int	main(void)
{
	printf("%d\n",ft_iterative_power(0, 0));
	printf("%d\n",ft_iterative_power(-4, 3));
	printf("%d\n",ft_iterative_power(3, -4));
	printf("%d\n",ft_iterative_power(5, 3));
	return(0);
}