/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:22:06 by gonbarbo          #+#    #+#             */
/*   Updated: 2023/02/04 19:45:46 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX "0123456789abcdef"

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	ft_char_is_printable(char ch)
{
	return (ch >= 32 && ch <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 0)
		{
			if (str[i] <= 16)
			{
				ft_putchar('\\');
				ft_putchar(HEX[str[i] / 16]);
				ft_putchar(HEX[str[i] % 16]);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char str[] = "Coucou\rtu vas bien ?";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/

int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}