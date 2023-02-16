/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:18:10 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/16 12:28:01 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	factorial = 1;
	if (nb > 0)
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}
/*#include <stdio.h>

 int	main(void)
{
	printf("%d", ft_recursive_factorial(10));
}*/
