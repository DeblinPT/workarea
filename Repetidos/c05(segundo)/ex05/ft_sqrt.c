/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:37:20 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/15 21:23:18 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	srt;
	int	index;

	index = 1;
	if (nb <= 3)
		return (0);
	while (index <= (nb / index))
	{
		srt = index * index;
		if (srt == nb)
			return (index);
		index++;
	}
	return (0);
}

/*#include<stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(2147483642));
}
*/