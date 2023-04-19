/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:55:21 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/15 21:23:44 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (ft_find_next_prime(++nb));
		i++;
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483647));
}
*/