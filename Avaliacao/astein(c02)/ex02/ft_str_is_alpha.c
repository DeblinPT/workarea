/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:25:07 by astein            #+#    #+#             */
/*   Updated: 2023/02/05 00:10:48 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
	}
	return (1);
}


int	main(void)
{
	int	test_result;

	test_result = ft_str_is_alpha("asdfasdfasdf");
	test_result = ft_str_is_alpha("adf7asdf");
	test_result = ft_str_is_alpha("");
	return (0);
}

