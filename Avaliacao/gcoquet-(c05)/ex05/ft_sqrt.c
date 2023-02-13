/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:52:15 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/13 16:08:19 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	i;

	i = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (nb > i * i)
	{
		i++;
	}	
	if (nb == i * i)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

int	main (void)
{
	printf("%d\n",ft_sqrt(81));
	printf("%d\n",ft_sqrt(0));
	printf("%d\n",ft_sqrt(1));
	printf("%d\n",ft_sqrt(-25));
	printf("%d\n",ft_sqrt(15129));
}
