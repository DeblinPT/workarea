/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:02:17 by adimas-d          #+#    #+#             */
/*   Updated: 2023/02/02 18:05:30 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n >= 0)
	{
		result = 'P';
		write (1, &result, 1);
	}
	else
	{	
		result = 'N';
		write(1, &result, 1);
	}	
}

/*
int		main()
{
	ft_is_negative(-42);
	return (0);
}*/
