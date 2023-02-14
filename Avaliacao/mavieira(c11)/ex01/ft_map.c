/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavieira <mavieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:02:37 by mavieira          #+#    #+#             */
/*   Updated: 2023/02/14 13:55:46 by mavieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*dest;

	dest = (int *)malloc(length * sizeof(int));
	if (!dest)
		return (0);
	i = 0;
	while (i < length)
	{
		dest[i] = (*f)(tab[i]);
		i++;
	}
	return (dest);
}
