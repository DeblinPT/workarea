/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:40:44 by gonbarbo          #+#    #+#             */
/*   Updated: 2023/02/04 19:27:32 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "abCdeFgHi";
	str2 = "abCde2gHi";
	str3 = "2bCde2gHi";
	str4 = "abCde2gH2";
	printf("str1: %s / is_aplha: %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: %s, is_aplha: %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: %s, is_aplha: %d\n", str3, ft_str_is_alpha(str3));
	printf("str4: %s, is_aplha: %d\n", str4, ft_str_is_alpha(str4));
	return (0);
}
