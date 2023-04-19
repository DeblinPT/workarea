/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:32:33 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/13 21:26:42 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	int				i;

	dest_size = 0;
	src_size = 0;
	i = 0;
	while (dest[dest_size] != 0)
		dest_size++;
	while (src[src_size] != 0)
		src_size++;
	if (size <= dest_size)
		return (size + src_size);
	while (size > (dest_size + i + 1) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}

/*
Usar "gcc -Wall -Wextra -Werror -g ft_strlcat.c -lbsd" no shell para correr

#include <bsd/string.h>
*/
