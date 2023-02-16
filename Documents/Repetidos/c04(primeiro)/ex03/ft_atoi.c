/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:49:43 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/13 21:15:26 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_sign(char *str, int *i)
{
	int	sign;
	int	index;

	index = *i;
	sign = 0;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
		{
			sign++;
		}
		index++;
	}
	*i = index;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	index;
	int	multiplicador;
	int	num;

	num = 0;
	multiplicador = 1;
	index = 0;
	while (str[index] == '\n' || str[index] == '\t' || str[index] == '\r'
		|| str[index] == '\v' || str[index] == '\f' || str[index] == ' ')
	{
		index++;
	}
	if (str[index] == '+' || str[index] == '-')
	{
		if (ft_sign(str, &index) % 2 == 1)
			multiplicador = -1;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		num = (num * 10) + (str[index] - '0');
		index++;
	}
	num *= multiplicador;
	return (num);
}
