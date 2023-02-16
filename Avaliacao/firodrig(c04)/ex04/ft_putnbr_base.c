/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:43:55 by firodrig          #+#    #+#             */
/*   Updated: 2023/02/16 17:21:22 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	len(char *base)
{
	int	i;
	int	z;

	i = 0;
	while (base[i] != '\0')
	{
		z = i + 1;
		while (base[z] != '\0')
		{
			if (base[i] == base[z])
				return (-1);
			z++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (-1);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	i_base(int nbr, int base, char *chars)
{
	if (nbr < base)
	{
		ft_putchar(chars[nbr % base]);
	}
	else
	{
		i_base(nbr / base, base, chars);
		ft_putchar (chars[nbr % base]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = len(base);
	if (l >= 2)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			i_base((nbr / l) * -1, l, base);
			ft_putchar(base[nbr % l * -1]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			i_base(nbr * -1, l, base);
		}
		else
			i_base(nbr, l, base);
	}
}

#include <unistd.h>

int	len(char *base);
void	i_base(int nbr, int base, char *chars);
void	ft_putchar(char c);
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(6542, "abchntfdef");
	write(1, "\n", 1);
	return (0);
}

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

