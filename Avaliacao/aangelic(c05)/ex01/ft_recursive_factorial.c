/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:53:50 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/12 16:43:29 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 1)
	{
		result *= nb * ft_recursive_factorial(nb -1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}
int main ()
{
   printf("%i", ft_recursive_factorial(4));
}
