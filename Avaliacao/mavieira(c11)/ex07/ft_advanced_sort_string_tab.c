/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 07:52:31 by mavieira          #+#    #+#             */
/*   Updated: 2023/02/14 19:58:18 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[i_], tab[j]) > 0)
				i_ = j;
			j++;
		}
		ft_swap(&tab[i], &tab[i_]);
		i++;
	}
}
