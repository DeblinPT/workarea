/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:38:35 by skioridi          #+#    #+#             */
/*   Updated: 2023/02/04 18:57:11 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int	main(void)
{
	int 	nb;
	char	*src;
	char	*dest;
	char	*ft_src;
	char	*ft_dest;
	char	*buff;
	char	*ft_buff;

	src = calloc(7, sizeof(char));
	dest = calloc(12, sizeof(char));
	ft_src = calloc(12, sizeof(char));
	ft_dest = calloc(12, sizeof(char));
	strcpy(src, "galera");
	strcpy(ft_src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_dest, "alo ");
	nb = 13;
	buff = strncat(dest, src, nb);
	ft_buff = ft_strncat(ft_dest, ft_src, nb);
	if (ft_dest != ft_buff)
		printf("[1] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
	else if (strcmp(buff, ft_buff) != 0)
	{
		printf("[1] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
		return (1);
	}
	else
		printf("[1] OK, nb = %02d, result=%s\n", nb, ft_buff);
	nb = 4;
	strcpy(src, "galera");
	strcpy(ft_src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_dest, "alo ");
	buff = strncat(dest, src, nb);
	ft_buff = ft_strncat(ft_dest, ft_src, nb);
	if (ft_dest != ft_buff)
		printf("[2] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
	else if (strcmp(buff, ft_buff) != 0)
	{
		printf("[2] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
		return (1);
	}
	else
		printf("[2] OK, nb = %02d, result=%s\n", nb, ft_buff);
	nb = 0;
	strcpy(src, "galera");
	strcpy(ft_src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_dest, "alo ");
	buff = strncat(dest, src, nb);
	ft_buff = ft_strncat(ft_dest, ft_src, nb);
	if (ft_dest != ft_buff)
		printf("[3] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
	else if (strcmp(buff, ft_buff) != 0)
	{
		printf("[3] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
		return (1);
	}
	else
		printf("[3] OK, nb = %02d, result=%s\n", nb, ft_buff);
	return (0);
}