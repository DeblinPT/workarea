/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:48:57 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/14 14:41:05 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
	while (base[i] == '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_length(base))
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
		if (nb < ft_length(base))
			ft_print(base[nb % ft_length(base)]);
		if (nb >= ft_length(base))
		{
			ft_putnbr_base(nb / (ft_length(base)), base);
			ft_putnbr_base(nb % (ft_length(base)), base);
		}
	}
}

/*#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putnbr_base(int nb, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	// base binaria
	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
	ft_putnbr_base(47, "01");
	ft_putchar('\n');
	printf("Esperado: 101111\n");
	ft_putnbr_base(47, "\\/");
	ft_putchar('\n');
	printf("Esperado: /\\////\n");
	// base 5
	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
	ft_putnbr_base(36, "01345");
	ft_putchar('\n');
	printf("Esperado: 131\n");
	ft_putnbr_base(36, "sd2ek");
	ft_putchar('\n');
	printf("Esperado: d2d\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putchar('\n');
	printf("Esperado: -2147483648\n");
	ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: -;.]}]@\\{]@\n");
	// base 16
	printf("Bases 16, n = -65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
	ft_putnbr_base(-65040, "0123456789ABCDEF");
	ft_putchar('\n');
	printf("Esperado: -FE10\n");
	ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
	ft_putchar('\n');
	printf("Esperado: -afdj\n");
	// base 0 e base 1, nao pode aparecer nada
	printf("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
	ft_putnbr_base(-29092, "0");
	ft_putnbr_base(-29092, "");
	return (0);
}*/