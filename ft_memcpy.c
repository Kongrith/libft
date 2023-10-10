/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <kkomasat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:03 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/07 15:55:14 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy
copy a memory block where source and destination do not overlap */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *restrict dest, const void * restrict src, size_t n)
{
	int	i;
	char	*src_char = (char *)src;
	char	*dest_char = (char *)dest;
	
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		//*(dest_char + i) = *(src_char + i);
		++i;
	}
}
int main () {
	char src[10] = "123456789";
	//char dest1[10];
	//char dest2[10];
	//strcpy(dest1,"abcdefghijklmnopqrstwxyz");
	//strcpy(dest2,"abcdefghijklmnopqrstwxyz");
	//printf("Before memcpy dest = %s\n", dest1);
	//memcpy(dest1, src, 4);
	//printf("After memcpy dest = %s\n", dest1);
	//ft_memcpy(dest2, src, 4);
	//printf("After memcpy dest = %s\n", dest2);

	printf("Before   memcpy dest = %s\n", src);
	//memcpy(src+1, src, 8);
	//printf("After    memcpy dest = %s\n", src);
	ft_memcpy(src+1, src, 8);
	printf("After ft_memcpy dest = %s\n", src);
	
	return(0);
}
