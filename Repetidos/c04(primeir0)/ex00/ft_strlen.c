/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:33:13 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/12 17:52:00 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		index++;
	}
	return (index);
}

/*#include<stdio.h>

int	main(void)
{
	char	str1[] = "0123456789";
	char	str2[] = "abcdefghijklmnopqrstuvwxyz";
	int		res_str1;
	int		res_str2;

	res_str1 = ft_strlen(str1);
	printf("O tamanho do Array1 e: %d\n", res_str1);
	res_str2 = ft_strlen(str2);
	printf("O tamanho do Array2 e: %d\n", res_str2);
}*/