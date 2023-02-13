/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:57:40 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/13 21:03:57 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	index;
	int	i;

	i = -1;
	while (tab[++i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index + 1] && cmp(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}	
	}
}

// void	print_tab_nl(char **tab)
// {
// 	int i;

// 	i = 0;
// 	printf("{");
// 	while (tab[i] != NULL)
// 		printf("\"%s\", ", tab[i++]);
// 	printf("NULL} \n");

// }

// int	ft_strcmp(char *s1, char*s2)
// {
// 	return (strcmp(s1, s2));
// }

// int	main(void)
// {
// 	char *tab0[] = {"blablabla", "array", "word", "00", "this is arr", NULL};
// 	printf("tab before:     ");
// 	print_tab_nl(tab0);

// 	ft_advanced_sort_string_tab(tab0, ft_strcmp);

// 	printf("tab strcmp:     ");
// 	print_tab_nl(tab0);
// }