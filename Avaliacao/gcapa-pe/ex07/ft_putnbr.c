/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:22:46 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/01/29 18:49:48 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_out(char remain[], int array_length, int is_negative)
{
	int		i;
	int		j;
	char	buf[100];

	j = 0;
	if (is_negative == 1)
	{
		buf[0] = 45;
		j++;
	}
	i = array_length;
	while (i >= 0)
	{
	buf[j] = remain[i];
		j++;
		i--;
	}
	buf[j] = '\0';
	write(1, buf, j);
}

void	ft_putnbr(int nb)
{
	char	remain[100];
	int		is_negative;
	int		modulo;
	int		array_length;

	array_length = 0;
	is_negative = 0;
	if (nb < 0)
	{
		is_negative = 1;
		nb = -1 * nb;
	}
	while (nb >= 10)
	{
		modulo = nb % 10;
		nb /= 10;
		remain[array_length] = modulo + 48;
		array_length++;
	}
	remain[array_length] = nb + 48;
	remain[array_length + 1] = '\0';
	ft_out(remain, array_length, is_negative);
}

int		main()
{
	ft_putnbr(-2147483647);
	return (0);
} 
