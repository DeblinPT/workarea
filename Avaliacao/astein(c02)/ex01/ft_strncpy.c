/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:24:37 by astein            #+#    #+#             */
/*   Updated: 2023/02/06 20:26:06 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_strncpy_test(char *dest, char *ft_dest, char *src, unsigned int n)
{
	char *res;
	char *ft_res;

	res = strncpy(dest, src, n);
	ft_res = ft_strncpy(ft_dest, src, n);
	if (ft_res != ft_dest)
		printf("> KO, return addres doesn't match *ft_dest, expected: %p, got: %p\n", ft_res, ft_dest);
	else if (strcmp(res, ft_res) != 0)
		printf("> KO, string has not been copied properly, expected: %s, got: %s\n", res, ft_res);
	else
		printf("> OK, result: %s\n", ft_res);
}

int	main(void)
{
	unsigned int	n;
	char 			*src;
	char 			*dest;
	char 			*ft_dest;

	src = calloc(100, sizeof(char));
	dest = calloc(100, sizeof(char));
	ft_dest = calloc(100, sizeof(char));
	n = 0;
	srand(0);
	while (n < 99)
	{
		src[n] = rand() % 90 + '0' >  126 ? '.' : rand() % 90 + '0';
		n++;
	}
	src[n] = '\0';
	n = 0;
	while (n < 100)
	{
		ft_strncpy_test(dest, ft_dest, src, n);
		n++;
	}
	while (n < 99)
	{
		src[n] = rand() % 90 + '0' >  126 ? '.' : rand() % 90 + '0';
		dest[n] = rand() % 88 + '0' >  126 ? '.' : rand() % 88 + '0';
		n++;
	}
	src[n] = '\0';
	n = 0;
	while (n < 100)
	{
		ft_strncpy_test(dest, ft_dest, src, n);
		n++;
	}
	return (0);
}