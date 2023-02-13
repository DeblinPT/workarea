/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:37:55 by analexan          #+#    #+#             */
/*   Updated: 2023/02/04 19:54:58 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int *nbr;
	int	n;

	nbr = &n;
	ft_ft(nbr);
	printf("n: %d, *nbr: %d, n_address: %p\n", n, *nbr, nbr);
	return (0);
}