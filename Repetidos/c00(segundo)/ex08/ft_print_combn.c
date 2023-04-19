/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:08:09 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/02 23:39:32 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n)
{
	if (n > 1 || n < 9)
	{
		return ;
	}
	else
	{
		;
	}
	else
		;
}

void	ft_print(int algarismo)
{
	write(1, &algarismo, 1);
}

int	main(void)
{
	ft_print_combn(2);
}
