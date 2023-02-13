/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:42:38 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/13 20:25:23 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]) == 1)
			return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int i = -1;

	while(str[++i])
	{
		if((str[i] >= '0' && str[i] <= '9'))
		return 1;
	}
	return 0;
}

int		main(void)
{
	char *tab0[] = {"Vaaaaaagh!", "ADF2ASDF", "__++_\\", 0};
	char *tab1[] = {"213413", "abs", "__++_\\4132", 0};
	printf("tab0: %i\n", ft_any(tab0, ft_str_is_numeric));
	printf("tab1: %i\n", ft_any(tab1, ft_str_is_numeric));
}