/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:46:42 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/15 23:12:27 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char *c)
{	
	int	i;

	i = 0;
	while (c[i] != 0)
		{
			write (1, &c, 1);
			i++;
		}
}

int	main(int argc, char *argv)
{
	if (argc == 1)
		ft_putchar(argv);
	return (0);
}
