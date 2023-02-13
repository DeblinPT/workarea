/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:52:11 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/13 16:00:14 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	valor;

	valor = 0;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}		
	else if (index > 1)
	{
		valor = ft_fibonacci(index - 1);
		valor = valor + ft_fibonacci(index - 2);
	}
	return (valor);
}

int	main(void)
{
	printf("%d  ",ft_fibonacci(0));
	printf("%d  ",ft_fibonacci(1));
	printf("%d  ",ft_fibonacci(2));
	printf("%d  ",ft_fibonacci(3));
	printf("%d  ",ft_fibonacci(4));
	printf("%d  ",ft_fibonacci(5));
	printf("%d  ",ft_fibonacci(6));
	printf("%d  ",ft_fibonacci(7));
	printf("%d  ",ft_fibonacci(8));
	printf("%d  ",ft_fibonacci(9));
	printf("%d\n",ft_fibonacci(10));
	printf("%d\n",ft_fibonacci(-10));
	return(0);
}