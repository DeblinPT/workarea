/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: firodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:41:51 by firodrig          #+#    #+#             */
/*   Updated: 2023/02/15 18:09:24 by firodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*
#include <unistd.h>
#include <stdio.h>

int main() 
{
  char *str = "42Rules!";
  int len = ft_strlen(str);
  printf("%d", len);
  return 0;
}
*/
