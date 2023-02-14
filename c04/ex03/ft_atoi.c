/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:49:43 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/14 03:10:54 by adimas-d         ###   ########.fr       */
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
	while (str[index] >= '\n' || str[index] == '\t' || str[index] == '\r'
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

#include <stdio.h>
#include <stdlib.h>

void	ft_atoi_like_test(char *str)
{
	int buff;
	int ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int		main(void)
{
	char *str;

	// quando o comportamento e igual ao de atoi
	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str);
	// quando o comportamento e diferente ao de atoi
	str = " \n \t \r \v --+-+-+-2147483648asd";
	ft_atoi_unlike_test(str, -2147483648);
	str = " \n \t\f\r \v -++-+-++1234b67asd";
	ft_atoi_unlike_test(str, -1234);
	return (0);
}
