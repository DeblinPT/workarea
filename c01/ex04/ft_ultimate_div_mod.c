/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:11:32 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/05 20:23:21 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempdiv;
	int	tempmod;

	tempdiv = *a / *b;
	tempmod = *a % *b;
	*a = tempdiv;
	*b = tempmod;
}
