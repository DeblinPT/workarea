/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:42:26 by ceribeir          #+#    #+#             */
/*   Updated: 2023/02/16 21:50:01 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_length(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	di;
	unsigned int	si;

	sl = str_length(src);
	dl = str_length(dest);
	di = dl;
	si = 0;
	if (size == 0 || size <= dl)
		return (sl + size);
	while (src[si] && si < (size - dl - 1))
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0';
	return (dl + sl);
}

#include <stdio.h>
int	main(void)
{
	char arr1[50] = "ASLD";
	char arr2[] = "Ar4DJF";
	printf("%d\n",ft_strlcat(arr1, arr2, 8));
	printf("%s\n%s\n", arr1, arr2);
	return 0;
}
