/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:27:55 by fda-estr          #+#    #+#             */
/*   Updated: 2023/02/11 19:23:59 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] && i < size - dlen -1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dlen + slen);
}

int	main(void)
{
	char arr1[50] = "ASLD";
	char arr2[] = "ADJF";
	printf("%d\n",ft_strlcat(arr1, arr2, 6));
	printf("%s\n%s\n", arr1, arr2);
	return 0;
}