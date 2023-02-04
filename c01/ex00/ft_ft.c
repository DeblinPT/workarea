/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:38:45 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/03 20:46:03 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	int num;
		
	num = 42;
	nbr = &num;
	write(1, nbr, 2);
}

int	main(void)
{
	int* nbr;
	ft_ft(nbr);
		return 0;
}
