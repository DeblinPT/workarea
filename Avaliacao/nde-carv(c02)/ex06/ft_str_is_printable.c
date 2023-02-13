/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:27:34 by gcoquet-          #+#    #+#             */
/*   Updated: 2023/02/11 17:56:32 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
		{
			return (0);
		}
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
	str1 = "BCDEFGH~";
	str2 = "BCDEFGHI";
	str3 = "ABCDCDF";
	str4 = "";
	printf("str1: %s, is_printable: %d\n", str1, ft_str_is_printable(str1));
	printf("str2: %s, is_printable: %d\n", str2, ft_str_is_printable(str2));
	printf("str3: %s, is_printable: %d\n", str3, ft_str_is_printable(str3));
	printf("str4: %s, is_printable: %d\n", str4, ft_str_is_printable(str4));
	return (0);
}