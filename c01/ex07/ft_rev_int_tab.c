/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:07:59 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/05 20:25:53 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	z;
	int	temp;

	a = 0;
	while (a != (size / 2))
	{
		z = size - a - 1;
		temp = tab[a];
		tab[a] = tab[z];
		tab[z] = temp;
		a++;
	}
}
