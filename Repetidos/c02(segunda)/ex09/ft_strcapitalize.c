/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:52:44 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/08 17:37:10 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			if (str[i - 1] > 96 && str[i - 1] < 123)
				str[i] += 32;
			if (str[i - 1] > 65 && str[i - 1] < 91)
				str[i] += 32;
			if (str[i - 1] > 47 && str[i - 1] < 58)
				str[i] += 32;
		}
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] > 122 || str[i - 1] < 48)
				str[i] -= 32;
			if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
