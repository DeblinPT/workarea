/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:30:12 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/15 09:30:49 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	res = 1;
	if (power > 0)
		res = res * nb * ft_recursive_power(nb, power - 1);
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
printf("power of  %d by  %d is %d\n", i, j, ft_recursive_power(i, j));
                i++;
        }
}*/
