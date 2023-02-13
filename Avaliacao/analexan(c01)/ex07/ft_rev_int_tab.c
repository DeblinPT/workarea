/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:49:06 by analexan          #+#    #+#             */
/*   Updated: 2023/02/04 20:14:39 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// 1/2=(0.5)~0
// "hi"; = {'h', 'i', '\0'};

#include <stdio.h>
#include<stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

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