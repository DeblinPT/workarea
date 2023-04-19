/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:32:33 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/16 20:10:13 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = 0;
	src_size = 0;
	i = 0;
	while (dest[dest_size] != 0)
		dest_size++;
	while (src[src_size] != 0)
		src_size++;
	if (size == 0 || size <= dest_size)
		return (size + src_size);
	while (i < size - dest_size -1 && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}

/*#include <stdio.h>
int	main(void)
{
	char arr1[50] = "ASLD";
	char arr2[] = "Ar4DJF";
	printf("%d\n",ft_strlcat(arr1, arr2, 8));
	printf("%s\n%s\n", arr1, arr2);
	return 0;
}*/

/*
//Usar "gcc -Wall -Wextra -Werror -g ft_strlcat.c -lbsd" no shell para correr

#include <bsd/string.h>
*/