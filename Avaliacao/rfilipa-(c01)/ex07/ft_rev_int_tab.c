/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:19:25 by rfilipa-          #+#    #+#             */
/*   Updated: 2023/02/11 18:31:51 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	posactual;
	int	temp;

	posactual = 0;
	temp = 0;
	while (posactual < (size / 2))
	{
		temp = tab[posactual];
		tab [posactual] = tab [size - 1 - posactual];
		tab [size - 1 - posactual] = temp;
		posactual++;
	}
}
int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(9, sizeof(int));
	counter = 0;
	while (counter < 9)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 9)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 9);
	counter = 0;
	while (counter < 9)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}
