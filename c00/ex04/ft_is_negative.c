/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:14:23 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/01/29 18:45:07 by adimas-d         ###   ########.fr       */
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

int		main()
{
	ft_is_negative(-42);
	return (0);
}
