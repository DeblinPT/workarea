/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:26:07 by astein            #+#    #+#             */
/*   Updated: 2023/02/05 00:14:45 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	return (1);
}


int	main(void)
{
	int	test_result;

	test_result = ft_str_is_uppercase("ASBNBNBZ");
	test_result = ft_str_is_uppercase("AHLJJ6ALJHZ");
	test_result = ft_str_is_uppercase("AHJLLJ6^Ahjlljk");
	test_result = ft_str_is_uppercase("");
	return (0);
}

