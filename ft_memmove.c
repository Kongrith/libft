/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <kkomasat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:55:36 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/14 11:38:12 by kkomasat         ###   ########.fr       */

/* memmove
copy a memory block where source and destination can overlap

a) backward copy
|_;_;_;_;_;_|          (source)
      |_;_;_;_;_;_|    (destination)
            <-<-<-^    start from the end to shift the values to the right

b) forward copy
      |_;_;_;_;_;_|    (source)
|_;_;_;_;_;_|          (destination)
^->->->                start from the beginning to shift the values to the left

*/

#include "libft.h"

void *ft_memmove(void *dest0, const void *src0, size_t n)
{
        size_t		i;
		char		*dest;
		const char	*src;

		dest = dest0;
		src = src0;
		if (n == 0 || dest == src)
			return (dest);
		
		if (dest > src && src + n > dest)
		{
			printf("backward copy case\n");
			i = n;
			while (i > 0)
			{
				dest[i-1] = src[i-1];
				--i;
			}
		}
		else
		{
			printf("forward copy case\n");
        	i = 0;
        	while (i < n)
			{
				dest[i] = src[i];
				++i;
        	}
		}
        return (dest);
}
/*
int main () {
        char src1[] = "0123456789";
        char src2[] = "0123456789";
        //char dst1[] = "0000000000";
        //char dst2[] = "0000000000";
	
        printf("Before   memcpy dest = %s\n", src1);
        //printf("After    memcpy dest = %s\n", (char *) memmove(dst1, src1, 10));
        //printf("After ft_memcpy dest = %s\n", (char *) ft_memmove(dst2, src2, 10));
		
		char *ans1 = memmove(src1-1, src1, 10);
		char *ans2 = memmove(src2-1, src2, 10);
	
		for (int i = 0; i < 10; i++)
		{
			printf("%c", ans1[i]);
		}
		printf("\n");

		for (int i = 0; i < 10; i++)
		{
			printf("%c", ans2[i]);
		}
		printf("\n");

        return(0);
}*/
