/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:25:49 by astein            #+#    #+#             */
/*   Updated: 2023/02/05 00:14:06 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	return (1);
}


int	main(void)
{
	int	test_result;

	test_result = ft_str_is_lowercase("asdfasd");
	test_result = ft_str_is_lowercase("asdf7asdf");
	test_result = ft_str_is_lowercase("asdfAasdf");
	test_result = ft_str_is_lowercase("");
	return (0);
}

