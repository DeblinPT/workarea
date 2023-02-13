/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:21:38 by marioliv          #+#    #+#             */
/*   Updated: 2023/02/06 03:48:22 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(11, sizeof(char));
	str2 = calloc(11, sizeof(char));
	str3 = calloc(11, sizeof(char));
	str4 = calloc(11, sizeof(char));
	str1 = "0123456789";
	str2 = "a123456789";
	str3 = "0123:56789";
	str4 = "012345678/";
	printf("str1: %s, is_num: %d\n", str1, ft_str_is_numeric(str1));
	printf("str2: %s, is_num: %d\n", str2, ft_str_is_numeric(str2));
	printf("str3: %s, is_num: %d\n", str3, ft_str_is_numeric(str3));
	printf("str4: %s, is_num: %d\n", str4, ft_str_is_numeric(str4));
	return (0);
}