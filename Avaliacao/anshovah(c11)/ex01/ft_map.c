/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:27:02 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/13 20:23:06 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*map;

	i = -1;
	map = (int *)malloc(length * sizeof(int));
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}

int	ft_mul2(int x)
{
	return (x * 2);
}

int main()
{
	int ar[] = {10, 30, 50};
	int i = -1;
	int *map;

	map = ft_map(ar, 3, ft_mul2);

	while(++i < 3)
		printf("%d ", map[i]);
}