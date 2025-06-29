/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:33:42 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/13 20:30:08 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = -1;
	sorted = 1;
	while (++i < length - 1 && sorted)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		sorted = 0;
	}
	if (sorted != 1)
	{
		i = -1;
		while (++i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
	}
	return (1);
}

int	bigger_than(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

int main(void)
{
	int tab0[] = {1, 1, 1, 2, 2, 2, 3, 4, 5};
	int tab1[] = {1, 7, 3, 4, 5};
	int tab2[] = {7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 
4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1};

	printf("expect 1 got %i\n", ft_is_sort(tab0, 9, bigger_than));
	printf("expect 0 got %i\n", ft_is_sort(tab1, 5, bigger_than));
	printf("expect 1 got %i\n", ft_is_sort(tab2, 26, bigger_than));
}