/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:38:41 by skioridi          #+#    #+#             */
/*   Updated: 2023/02/04 18:52:17 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				retv;
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < (n - 1)))
		i++;
	retv = (s1[i] - s2[i]);
	return (retv);
}
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "L234jjtx/^^l6";
	s2 = "L234jj6tx/^l";
	printf("Difference of different characters is %d", ft_strncmp(s1, s2, 5));
}
