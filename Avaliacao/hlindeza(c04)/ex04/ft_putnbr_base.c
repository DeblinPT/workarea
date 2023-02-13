/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:15:49 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/05 01:16:40 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j + 1])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbrp;

	nbrp = nbr;
	if (ft_check_error(base) == 0)
	{
		if (nbrp < 0)
		{
			ft_putchar('-');
			nbrp *= -1;
		}
		if (nbrp < ft_strlen(base))
		{
			ft_putchar(base[nbrp]);
		}
		if (nbrp >= ft_strlen(base))
		{
			ft_putnbr_base(nbrp / (ft_strlen(base)), base);
			ft_putnbr_base(nbrp % (ft_strlen(base)), base);
		}
	}
}

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

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
}