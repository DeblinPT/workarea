/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:26:30 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/15 09:29:11 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	res = 1;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*#include <stdio.h>

int main(void)
{
        int i;
	int j;

        i = 0;
	j = 3;

        while (i < 15)
        {
printf("power of  %d by  %d is %d\n", i, j, ft_iterative_power(i, j));
                i++;
        }
}*/
