/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:48:17 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/15 18:07:50 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (res);
}

/*#include<stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(12));
}
*/