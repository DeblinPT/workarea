/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:38:43 by skioridi          #+#    #+#             */
/*   Updated: 2023/02/04 18:49:09 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	retv;
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	retv = (s1[i] - s2[i]);
	return (retv);
}

int	main(void)
{
	char *s1;
	char *s2;

	s1 = "L234jjtx/^^l6";
	s2 = "L234jjtx/^l";
	printf("Difference of different characters is %d", ft_strcmp(s1, s2));
}
