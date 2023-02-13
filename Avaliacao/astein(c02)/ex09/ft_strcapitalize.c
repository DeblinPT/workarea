/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:27:12 by astein            #+#    #+#             */
/*   Updated: 2023/02/05 00:24:18 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	else
		return (1);
}

int	ft_char_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}

int	ft_set_capital(char c, int capitalise)
{
	int	char_is_upper_case;

	if (ft_char_is_alpha(c) == 1)
	{
		if (c >= 'a' && c <= 'z')
			char_is_upper_case = 0;
		else
			char_is_upper_case = 1;
		if (capitalise == 1 && char_is_upper_case == 0)
			c = (c - ('a' - 'A'));
		else if (capitalise == 0 && char_is_upper_case == 1)
			c = (c + ('a' - 'A'));
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_beginning_of_word;

	i = 0;
	is_beginning_of_word = 1;
	while (str[i] != '\0')
	{
		if (ft_char_is_alpha(str[i]) == 0 && ft_char_is_numeric(str[i]) == 0)
			is_beginning_of_word = 1;
		else
		{
			if (is_beginning_of_word == 1)
			{
				is_beginning_of_word = 0;
				str[i] = ft_set_capital(str[i], 1);
			}
			else
				str[i] = ft_set_capital(str[i], 0);
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	char str2[] = "ALO MALUCO 42BELEZA!";
	char str3[] = "alo+ma|uco a2beleza!";
	char str4[] = "ALO+MALUCO*a2BELEZA!";
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strcapitalize(str2);
	printf("str2_c: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strcapitalize(str3);
	printf("str3_c: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strcapitalize(str4);
	printf("str4_c: %s\n", str4);
	printf("str5: %s\n", str5);
	ft_strcapitalize(str5);
	printf("str5_c: %s\n", str5);
	printf("str6: %s\n", str6);
	ft_strcapitalize(str6);
	printf("str6_c: %s\n", str6);
	return (0);
}