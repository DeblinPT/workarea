/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:30:00 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/12 16:47:48 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(10));
}
