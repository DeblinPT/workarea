/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:59:21 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/16 14:48:02 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		a;
	char	*dest;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	dest = (char *)malloc(sizeof(char) * (a + 1));
	if (!dest)
	{
		return (0);
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

int	main(void)
{
	char	*a;
	char	*all;

	a = "Metallica";
	printf("%s\n", a);
	all = ft_strdup(a);
	printf("%s\n", all);
	free(all);
}
