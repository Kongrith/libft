/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:50:54 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/27 04:35:07 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memset
fill target memory with a constant byte for specific block.
*
*/

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len )
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)dest;
	while (i < len)
	{
		*(ptr + i) = (unsigned char) c;
		++i;
	}
	return (dest);
}
/*
int main(void) 
{ 
    char str1[40] = "GeeksForGeeks is for programming geeks.";
	char str2[40] = "GeeksForGeeks is for programming geeks.";
    printf("Before   memset(): %s \n", str1); 
  
    memset(str1 + 32, '+', 8*sizeof(char)); 
    printf("After    memset(): %s\n", str1); 
    ft_memset(str2 + 32, '+', 8*sizeof(char));
	printf("After ft_memset(): %s\n", str2);
	return 0; 
}*/
