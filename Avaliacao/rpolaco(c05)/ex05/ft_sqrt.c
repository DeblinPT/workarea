/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:07:28 by rpolaco-          #+#    #+#             */
/*   Updated: 2023/02/17 00:12:25 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while (res <= nb)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}

int		main(void)
{
	int	i;

	i = 0;
	while ( i <= 100)
	{	
		printf("%d: %d\n", i, ft_sqrt(i));
		i++;
	}
}
