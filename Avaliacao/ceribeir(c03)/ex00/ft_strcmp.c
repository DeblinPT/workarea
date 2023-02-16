/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:56:34 by ceribeir          #+#    #+#             */
/*   Updated: 2023/02/08 19:12:19 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			a = s1[i];
			b = s2[i];
			i = a - b;
			return (i);
		}
	}
	i = s1[i] - s2[i];
	return (i);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "abcdefghmf";
	s2 = "abcdefg";
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("%d ireturn", ft_strcmp(s1, s2));
	return (0);
}*/
