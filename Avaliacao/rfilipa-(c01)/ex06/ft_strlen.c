/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:54:24 by rfilipa-          #+#    #+#             */
/*   Updated: 2023/02/11 18:29:23 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

#include<stdio.h>

int	main(void)
{
	char 	*str = "Dont Panic";
	int		size;

	size = ft_strlen(str);
	printf("str=\"%s\"\nstrlen=%d\n", str, size);
	return (0);
}
