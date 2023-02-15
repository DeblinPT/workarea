/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:36:47 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/15 20:33:50 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)malloc(((max - min) + 1) * sizeof(int));
	if (min >= max)
		arr = NULL;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

int	main(void)
{
	int	i;
	int	*arrint;

	arrint = ft_range(1, 12);
	if (arrint != NULL)
	{
		for (i = 0; arrint[i] != '\0'; i++)
			printf("%i ", arrint[i]);
	}
}