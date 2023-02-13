/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:44:12 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/13 20:29:12 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < length)
	{
		if (f(tab[i]) != 0)
		count++;
	}
	return (count);
}

int ft_str_is_not_empty(char *str)
{
	if(str[0] == 0)
		return 1;
	return 0;	
}

int	main(void)
{
	char *tab0[] = {"bla bla bla", "", "tatat",
"777", "", "hahsdfas", "", "4123"};
	char *tab1[] = {"", "", "tatat", "777",
"", "hahsdfas", "", "4123"};
	printf("expected: 5, got %i\n", ft_count_if(tab0, 8, ft_str_is_not_empty));
	printf("expected: 4, got %i\n", ft_count_if(tab1, 8, ft_str_is_not_empty));
}