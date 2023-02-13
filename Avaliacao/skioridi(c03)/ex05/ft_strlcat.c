/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:38:27 by skioridi          #+#    #+#             */
/*   Updated: 2023/02/04 19:05:00 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = ft_strlen(dest);
	i = 0;
	while (i < (size - j - 1) && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (ft_strlen(src) + j);
}

int	main(void)
{
	
	char src[] = "abcdefghij ";
	char extra[] = "klmnop";
	printf("answer is: %d", ft_strlcat(src, extra, 30));
}