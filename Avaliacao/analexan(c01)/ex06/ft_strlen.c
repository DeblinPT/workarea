/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:35:38 by analexan          #+#    #+#             */
/*   Updated: 2023/02/04 20:07:01 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}


int	ft_strlen(char *str);

int	main(void)
{
	char 	*str = "42 is amazing bro rytufbhomykbv  oby8r tf";
	int		size;

	size = ft_strlen(str);
	printf("str=\"%s\"\nstrlen=%d\n", str, size);
	return (0);
}