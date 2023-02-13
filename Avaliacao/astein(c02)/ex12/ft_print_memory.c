/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:28:03 by astein            #+#    #+#             */
/*   Updated: 2023/02/05 00:34:05 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEXA "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_dez2hex(long dez)
{
	if (dez < 16)
	{
		ft_putchar(HEXA[dez]);
		return ;
	}
	else
		ft_put_dez2hex((dez / 16));
	ft_put_dez2hex((dez % 16));
}

void	ft_put_str2hex(char *str, int digits_2_print)
{
	int	i;
	int	count_of_put_char;

	i = 0;
	count_of_put_char = 0;
	while (str[i] != '\0' && (i < digits_2_print))
	{
		if (i > 0 && i % 2 == 0)
		{
			ft_putchar(' ');
			count_of_put_char++;
		}
		ft_putchar(HEXA[str[i] / 16]);
		count_of_put_char++;
		ft_putchar(HEXA[str[i] % 16]);
		count_of_put_char++;
		i++;
	}
	while (count_of_put_char < 40)
	{
		ft_putchar(' ');
		count_of_put_char++;
	}
}

int	ft_char_is_printable(char c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			*c_ptr;

	c_ptr = addr;
	i = 0;
	while (i < size)
	{
		ft_put_dez2hex((long)&addr + i);
		ft_putchar(':');
		ft_putchar(' ');
		ft_put_str2hex(&c_ptr[i], 16);
		j = i;
		while (c_ptr[j] != '\0' && j < (i + 16))
		{
			if (ft_char_is_printable(c_ptr[j]) == 1)
				ft_putchar(c_ptr[j]);
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i = i + 16;
	}
	return (addr);
}

#include <string.h>

int	main(void)
{
	char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

	ft_print_memory(str, strlen(str));
	return (0);
}