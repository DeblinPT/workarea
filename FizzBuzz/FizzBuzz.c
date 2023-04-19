/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FizzBuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:27:50 by adimas-d          #+#    #+#             */
/*   Updated: 2023/03/21 18:42:43 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_number(int number)
{
	if(number > 9)
		ft_print_number(number / 10);
	write (1, &"0123456789"[number % 10], 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while(number <= 10000000)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "FizzBuzz", 8);
		else if (number % 5 == 0)
			write(1, "Buzz", 4);
		else if (number % 3 == 0)
			write(1, "Fizz", 4);
		else
			ft_print_number(number);
		number++;
		write(1, "\n", 1);
	}
}