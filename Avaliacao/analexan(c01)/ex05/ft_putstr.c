/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:40:52 by analexan          #+#    #+#             */
/*   Updated: 2023/02/04 20:03:15 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// a array ja é um pointer para o inicio da array
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	arr[] = "hello sgfdx";
	ft_putstr(arr);
	return (0);
}
