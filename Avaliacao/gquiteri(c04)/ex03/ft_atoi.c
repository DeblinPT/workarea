/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:31:36 by gquiteri          #+#    #+#             */
/*   Updated: 2023/02/14 15:43:30 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10;
		num += (str[i] - 48);
		i++;
	}
	return (num * sign);
}

// int	ft_atoi(char *str)
// {
	// int	i;
	// int	sign;
	// int	num;
// 
	// num = 0;
	// sign = 1;
	// i = 0;
	//skiping the spaces  white spaces on ascii  table
	// while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		// i++;
	// while (str[i] == '-' || str[i] == '+') //se str encontrar o - ou o +
	// {
		// if (str[i] == '-') // when find and equal a '-'
			// sign *= -1;    // 1  * -1 = -1  ---- second time -1 * -1 = +1
		// i++;               //increament;
	// }
	// while (str[i] >= 48 && str[i] <= 57)
	//this check on ascii tabe if is number
	// {
		// num = num * 10;
		// num += (str[i] - 48);
		// ;
		// i++;
	// }
	// return (num * sign);
// }

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