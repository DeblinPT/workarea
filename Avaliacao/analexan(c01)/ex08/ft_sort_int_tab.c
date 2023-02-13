/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:45:43 by analexan          #+#    #+#             */
/*   Updated: 2023/02/04 20:17:03 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}


#include <stdio.h>

int	main(void)
{
	int	counter;
	int	arr[] = {1, 333, 4444, 22};
	int	i;

	counter = 0;
	i = 4;
	while (counter < i)
	{
		printf("%d ", arr[counter]);
		counter++;
	}
	printf("\n");
	// execution of function
	ft_sort_int_tab(arr, i);
	counter = 0;
	while (counter < i)
	{
		printf("%d ", arr[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}
