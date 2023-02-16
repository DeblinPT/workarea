/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:23:30 by ceribeir          #+#    #+#             */
/*   Updated: 2023/02/16 17:04:56 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			a = s1[i];
			b = s2[i];
			i = a - b;
			return (i);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1 = "abcdefghi";
	char	*s2 = "abcdEfghi";
	int	n;

	n = 7;
	printf("s1: %s, s2: %s, n: %d\n", s1, s2, n);
	printf("%d ireturn", ft_strncmp(s1, s2, n));
	return (0);
}*/
