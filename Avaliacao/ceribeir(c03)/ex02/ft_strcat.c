/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:46:34 by ceribeir          #+#    #+#             */
/*   Updated: 2023/02/08 19:16:15 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	while (dest[c1] != '\0')
	{
		c1++;
	}
	c2 = 0;
	while (src[c2] != '\0')
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[c1] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "ola ";
	char	*src = "mundo";

	printf("dest: %s\n", ft_strcat(dest, src));
	return (0);
}*/
