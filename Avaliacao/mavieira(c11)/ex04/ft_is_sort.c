/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavieira <mavieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:25:05 by mavieira          #+#    #+#             */
/*   Updated: 2023/02/13 15:50:15 by mavieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	sorted = 1;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			sorted = -1;
		i++;
	}
	if (sorted == -1)
	{
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				sorted = 0;
			i++;
		}
	}
	if (sorted == -1)
		sorted = -sorted;
	return (sorted);
}
