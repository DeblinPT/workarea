/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:38:30 by skioridi          #+#    #+#             */
/*   Updated: 2023/02/04 19:00:20 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0' || str[j] == '\0')
		return (NULL);
	while (str[j] != '\0' && (to_find[i] != '\0'))
	{
		i = 0;
		while (str[j + i] == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (&str[j]);
		j++;
	}
	return (NULL);
}

int	main(void)
{
	printf("Found string: %s", ft_strstr("Hello, how is the weather today?",
				"weather"));
}
