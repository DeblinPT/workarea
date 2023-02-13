/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:40:46 by gonbarbo          #+#    #+#             */
/*   Updated: 2023/02/04 19:36:34 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	vlow(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	vup(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	vnum(char c)
{
	return (c >= '0' && c <= '9');
}

int	spaces(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] >= 'A' && str[s] <= 'Z')
		{
			str[s] = str[s] + 32;
		}
		s++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	s;

	spaces(str);
	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] >= 'a' && str[s] <= 'z')
		{
			if (vlow(str[s - 1]) || vup(str[s - 1]) || vnum(str[s - 1]))
				;
			else
				str[s] = str[s] - 32;
		}
		s++;
	}
	return (str);
}

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
