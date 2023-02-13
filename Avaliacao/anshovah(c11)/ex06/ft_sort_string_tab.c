/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:37:06 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/13 21:03:53 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

void	ft_sort_string_tab(char **tab)
{
	int	index;
	int	i;

	i = -1;
	while (tab[++i])
	{
		index = 0;
		while (tab[index])
		{                          cmp(tab[index], tab[index + 1])
			if (tab[index + 1] && ft_strcmp(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
	}
}

void	print_tab_nl(char **tab)
{
	int i;

	i = 0;
	printf("{");
	while (tab[i] != NULL)
		printf("\"%s\", ", tab[i++]);
	printf("NULL} \n");

}

int	main(void)
{
	char *tab0[] = {"blablabla", "array", "word", "00", "this is arr", NULL};
	printf("tab before: ");
	print_tab_nl(tab0);

	ft_sort_string_tab(tab0);

	printf("tab after:  ");
	print_tab_nl(tab0);
}