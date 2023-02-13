/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:51:07 by fregarci          #+#    #+#             */
/*   Updated: 2023/02/11 18:46:40 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, &str[i], 1);
	return (i);
}

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char 	*str = "42 is amazing bro";
	int		size;

	size = ft_strlen(str);
	printf("str=\"%s\"\nstrlen=%d\n", str, size);
	return (0);
}