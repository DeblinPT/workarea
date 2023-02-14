/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:32:33 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/14 18:59:28 by adimas-d         ###   ########.fr       */
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
	if (size == 0 || size <= dest_size)
		return (size + src_size);
	while (size > (dest_size + 1) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}

/*
Usar "gcc -Wall -Wextra -Werror -g ft_strlcat.c -lbsd" no shell para correr

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_idx;
	unsigned int	s_idx;
	unsigned int	res;

	d_idx = 0;
	s_idx = 0;
	res = 0;
	while (dest[d_idx] != '\0')
		d_idx++;
	while (src[res] != '\0')
		res++;
	if (size <= d_idx)
		res += size;
	else
		res += d_idx;
	while (src[s_idx] != '\0' && (d_idx + 1) < size)
	{
		dest[d_idx] = src[s_idx];
		d_idx++;
		s_idx++;
	}
	dest[d_idx] = '\0';
	return (res);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

void	ft_strlcat_test(char *dest, char *ft_dest, char *src, unsigned int size)
{
	unsigned int	return_value;
	unsigned int	ft_return_value;

	return_value = strlcat(dest, src, size);
	ft_return_value = ft_strlcat(ft_dest, src, size);
	if (return_value != ft_return_value)
		printf("> KO, expected: %u, got: %u\n", return_value, ft_return_value);
	else if (strcmp(dest, ft_dest) != 0)
		printf("> KO, expected: %s, got: %s\n", dest, ft_dest);
	else
		printf("> OK, result: %s\n", ft_dest);
}

int	main(void)
{
	char			*src;
	char			*dest;
	char			*ft_dest;

	// invalid case, dest is non null terminated in the first size - 1 bytes.
	src = "stuv";
	dest = "abcdefghijklmnopr";
	ft_dest = "abcdefghijklmnopr";
	ft_strlcat_test(dest, ft_dest, src, 0);
	ft_strlcat_test(dest, ft_dest, src, 1);
	ft_strlcat_test(dest, ft_dest, src, 4);
	ft_strlcat_test(dest, ft_dest, src, 10);
	// valid case, dest is null terminated in the first size - 1 bytes, modified and terminated
	src = "ghijkl";
	dest = strcpy(calloc(13, sizeof(char)), "abcdef");
	ft_dest = strcpy(calloc(13, sizeof(char)), "abcdef");
	ft_strlcat_test(dest, ft_dest, src, 8);
	ft_strlcat_test(dest, ft_dest, src, 10);
	return (0);
}
*/