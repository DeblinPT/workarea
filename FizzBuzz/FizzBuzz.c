/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FizzBuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:27:50 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/16 23:18:10 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac,char **av)
{
	if (ac == 1)
		ft_fizzbuzz(av[1])
	return (0);
}



void	ft_print(char print)
{
	write (1, &print, 1);
}
