/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:16:42 by gonbarbo          #+#    #+#             */
/*   Updated: 2023/02/04 19:25:27 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
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
	char	*ret;
	int		n;

	n = 8;
	src = calloc(11, sizeof(char));
	src = "0123456789";
	dest = calloc(11, sizeof(char));
	printf("Before:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n\n", dest);
	ret = ft_strncpy(dest, src, n);
	printf("After:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}
