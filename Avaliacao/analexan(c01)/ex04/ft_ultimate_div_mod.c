/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:31:31 by analexan          #+#    #+#             */
/*   Updated: 2023/02/04 20:01:19 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dd;
	int	mm;

	dd = *a / *b;
	mm = *a % *b;
	*a = dd;
	*b = mm;
}


#include <stdio.h>

int	main(void)
{
	int	div;
	int	mod;
	int	*p_div;
	int	*p_mod;

	div = 42;
	mod = 10;
	p_div = &div;
	p_mod = &mod;
	ft_ultimate_div_mod(p_div, p_mod);
	printf("Div = %d, Mod = %d\n", div, mod);
	return (0);
}
