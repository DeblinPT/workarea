/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:07:59 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/05 18:55:05 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	z;
	int	temp;

	a = 0;
	while (a != (size / 2))
	{
		z = size - a - 1;
		temp = tab[a];
		tab[a] = tab[z];
		tab[z] = temp;
		a++;
	}
}

/*#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(11, sizeof(int));
	counter = 0;
	while (counter < 11)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 11)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 11);
	counter = 0;
	while (counter < 11)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}*/
