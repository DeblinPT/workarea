/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:52:44 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/08 19:22:50 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			if (str[i - 1] > 96 && str[i - 1] < 123)
				str[i] += 32;
			else if (str[i - 1] > 64 && str[i - 1] < 91)
				str[i] += 32;
			else if (str[i - 1] > 47 && str[i - 1] < 58)
				str[i] += 32;
		}
		else if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] > 122 || str[i - 1] < 48)
				str[i] -= 32;
			else if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] -= 32;
			else if (str[i - 1] > 57 && str[i - 1] < 65)
				str[i] -= 32;
		}
	}
	return (str);
}

/*#include <stdio.h>

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
}*/
