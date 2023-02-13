/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:48:15 by rfontes-          #+#    #+#             */
/*   Updated: 2023/01/29 19:56:20 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		write(1, &a, 1);
		a = a - 1;
	}
}
int main(void)
{
	
	ft_print_alphabet();
}