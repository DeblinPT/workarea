/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:12:09 by marioliv          #+#    #+#             */
/*   Updated: 2023/02/06 03:36:38 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char *dest;
	char *ret;

	src = calloc(11, sizeof(char));
	src = "0123456789";
	dest = calloc(11, sizeof(char));
	ret = ft_strcpy(dest, src);	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("ret: %s\n", ret);
	return (0);
}