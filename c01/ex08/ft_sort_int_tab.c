/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:07:08 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/05 20:26:56 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		if (tab[a] > tab[b])
		{
			temp = tab[a];
			tab[a] = tab[b];
			tab[b] = temp;
			a = 0;
		}
		else
		++a;
	}
}
