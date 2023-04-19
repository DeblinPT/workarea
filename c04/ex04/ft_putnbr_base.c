/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:48:57 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/16 14:20:06 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a)
{
	write(1, &a, 1);
}

int	ft_length(char *base)
{
	int	ind;

	ind = 0;
	while (base[ind] != 0)
		ind++;
	return (ind);
}

int	ft_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_length(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (ft_errors(base) == 1)
	{
		if (nb < 0)
		{
			ft_print('-');
			nb = -nb;
		}
		if (nb / ft_length(base) == 0)
		{
			ft_print(base[nb % ft_length(base)]);
			return ;
		}
		else
		{
			ft_putnbr_base(nb / (ft_length(base)), base);
			ft_print(base[nb % ft_length(base)]);
		}
	}
}
