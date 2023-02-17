/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:52:38 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/14 14:40:22 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

/*int	main(void)
{
	char	str1[] = "Eu levo no pacote\nAi eu levo, sim senhor\n";
	char	str2[] = "Eu levo no pacote\nAi, tem outro sabor\n";
	char	str3[] = "Eu levo no pacote\nAi, eu levo sim senhor\n";
	char	str4[] = "Eu levo no pacote\nPra gosto do meu amor\n";

	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
	ft_putstr(str4);
}*/