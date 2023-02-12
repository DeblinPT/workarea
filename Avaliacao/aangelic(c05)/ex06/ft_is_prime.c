/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:46:28 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/12 16:48:29 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
int	main(void)
{
	printf("%d", ft_is_prime(7));
}
