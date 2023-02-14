/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:29:25 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 14:35:36 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_check(char *base, int len)
{
	int	i;
	int	i2;

	if (len > 1)
	{
		i = 1;
		while (base[i])
		{	
			i2 = 0;
			while (i2 != i)
			{
				if (base[i2] == base[i] || base[i] == '+' || base[i] == '-')
					return (0);
				i2++;
			}
			i++;
		}
		if (base[i] == '\0')
			return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;
	int		error;
	
	len = ft_strlen(base);
	error = ft_check(base, len);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
