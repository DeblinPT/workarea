/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavieira <mavieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 05:02:34 by mavieira          #+#    #+#             */
/*   Updated: 2023/02/14 07:49:32 by mavieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	i_;

	i = 0;
	while (tab[i])
	{
		i_ = i;
		j = i;
		while (tab[j])
		{
			if (ft_strcmp(tab[i_], tab[j]) > 0)
				i_ = j;
			j++;
		}
		ft_swap(&tab[i], &tab[i_]);
		i++;
	}
}
