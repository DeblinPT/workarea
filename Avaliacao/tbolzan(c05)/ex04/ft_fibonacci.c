/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:32:09 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/15 11:59:13 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	tmp;

	if (index < 0)
		return (-1);
	a = 0;
	b = 1;
	while (index > 0)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		index--;
	}
	return (a);
}

/*#include <stdio.h>

int main(void)
{
        int i;

        i = 0;

        while (i < 15)
        {
printf("fibonacci of %d  is %d\n", i, ft_fibonacci(i));
                i++;
        }
}*/
