/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:47:17 by jalves-p          #+#    #+#             */
/*   Updated: 2023/02/11 17:52:15 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *src != '\0')
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

int	main(void)
{
	char	*src;
	char	*dest;
	int		n;

	n = 8;
	src = calloc(11, sizeof(char));
	src = "0123456789";
	dest = calloc(11, sizeof(char));
	printf("Before:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n\n", dest);
	ft_strncpy(dest, src, n);
	printf("After:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}
