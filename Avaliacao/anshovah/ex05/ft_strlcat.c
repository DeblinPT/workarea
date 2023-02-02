/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimas-d < adimas-d@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:56:39 by anshovah          #+#    #+#             */
/*   Updated: 2023/01/29 20:20:10 by adimas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (dest[len])
		len++;
	while (src[i] && len < size - 1)
	{
		dest[len] = src[i];
		len++;
		i++;
	}	
	dest[len] = 0;
	return (len);
}

int     main(void)
{
    char    source[] = {"mother_fucker_fucking_fuck\n"};    
    char    dest[20] = {"Hello "};                    
    ft_strlcat(dest, source, 20); // this function adds the character from soutce to dest in the quantity (n) of the 3rd argument, the result will be the concatenated string of n elements                             
    printf("%s\n",dest);                                    
    return (0);                                        
}