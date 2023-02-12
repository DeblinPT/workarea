/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:57:09 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/12 16:44:38 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_interative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
int main()
{
	 printf("%i", ft_interative_power(4,3));
}
