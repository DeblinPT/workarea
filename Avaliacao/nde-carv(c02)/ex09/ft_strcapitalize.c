/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:04:06 by hishikaw          #+#    #+#             */
/*   Updated: 2023/02/11 18:01:32 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (a == 1)
				str[i] = str[i] - 32;
			a = 0;
		}
		else if (str [i] >= '0' && str [i] <= '9')
			a = 0;
		else
			a = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char string[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(string));
}
