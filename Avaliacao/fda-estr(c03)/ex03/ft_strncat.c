/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:30:02 by fda-estr          #+#    #+#             */
/*   Updated: 2023/02/11 19:22:51 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] != 0 && j < nb)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb);

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