/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d <adimas-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:01:14 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/15 20:28:00 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*target;
	int		i;

	i = 0;
	target = (char *)malloc(ft_strlen(src) + 1);
	if (!target)
		return (NULL);
	while (src[i])
	{
		target[i] = src[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}

int main(int ac, char **av)
{
  char *minha;

  if (ac == 2)
  {
    minha = ft_strdup(av[1]);
    printf(":%s:\n", minha);
  }
  return (0);
}