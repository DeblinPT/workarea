/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:32:40 by ceribeir          #+#    #+#             */
/*   Updated: 2023/02/15 14:06:58 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	index_arr;

	index_arr = 0;
	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	while ((min + index_arr) < max)
	{
		arr[index_arr] = min + index_arr;
		index_arr++;
	}
	return (arr);
}
