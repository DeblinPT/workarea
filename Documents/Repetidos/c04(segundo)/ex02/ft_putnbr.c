/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:14:09 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/14 14:40:33 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char num)
{
	write (1, &num, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{	
		ft_print('-');
		ft_print('2');
		nb = 147483648;
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{
		ft_print('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_print(nb + 48);
}

/*int	main(void)
{
	ft_putnbr(42);
}
*/