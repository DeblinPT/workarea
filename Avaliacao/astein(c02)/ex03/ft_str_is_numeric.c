/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:25:30 by astein            #+#    #+#             */
/*   Updated: 2023/02/05 00:12:30 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}


int	main(void)
{
	int	test_result;

	test_result = ft_str_is_numeric("123123123");
	test_result = ft_str_is_numeric("123asd111");
	test_result = ft_str_is_numeric("");
	return (0);
}

