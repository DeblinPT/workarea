/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:35:13 by nde-carv          #+#    #+#             */
/*   Updated: 2023/02/11 17:54:42 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "01234567";
	str2 = "a123456";
	str3 = "0123:458";
	str4 = "";
	printf("str1: %s / is_aplha: %d\n", str1, ft_str_is_numeric(str1));
	printf("str2: %s, is_aplha: %d\n", str2, ft_str_is_numeric(str2));
	printf("str3: %s, is_aplha: %d\n", str3, ft_str_is_numeric(str3));
	printf("str4: %s, is_aplha: %d\n", str4, ft_str_is_numeric(str4));
	return (0);
}