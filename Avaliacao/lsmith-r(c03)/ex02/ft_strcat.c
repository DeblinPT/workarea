/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:48:05 by lsmithr           #+#    #+#             */
/*   Updated: 2023/02/16 23:21:24 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	loc;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	loc = count;
	count = 0;
	while (src[count] != '\0')
	{
		dest[loc] = src[count];
		count++;
		loc++;
	}
	dest[loc] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char *src;
	char *dest;
	char *ft_src;
	char *ft_dest;
	char *result;
	char *ft_result;

	src = calloc(16, sizeof(char));
	dest = calloc(12, sizeof(char));
	ft_src = calloc(16, sizeof(char));
	ft_dest = calloc(12, sizeof(char));
	strcpy(src, "galerafffffffff");
	strcpy(dest, "alo ");
	strcpy(ft_src, "galerafffffffff");
	strcpy(ft_dest, "alo ");
	result = strcat(dest, src);
	ft_result = ft_strcat(ft_dest, ft_src);
	if (ft_dest != ft_result)
		printf("KO, return value of ft_strcar is different of ft_dest. ft_strcar=%p ft_dest=%p\n", ft_result, ft_dest);
	else if (strcmp(result, ft_result) != 0)
		printf("KO, value returned from strcmp with ft_strcat and strcat is different of zero(%d).\n", strcmp(result, ft_result));
	else
		printf("OK.\nresult: %s\n", ft_result);
	return (0);
}