/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <kkomasat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:03 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/13 14:14:10 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy
copy a memory block where source and destination do not overlap */
#include <stdio.h>
#include <string.h>

#define OVERLAP_FLAG 0

void chk_overlap_mem(void *dest, void *src, size_t n)
{
	char *x;
	char *y;
	size_t	i;

	x = dest;
	y = src;
	i = 0;
	while (i < n)
	{
    	if (x+i==y || y+i==x)
		{
			#undef  OVERLAP_FLAG
			#define  OVERLAP_FLAG (x+i==y || y+i==x)
		}
		++i;
	}
	#if (OVERLAP_FLAG==1)
		#warning The memory overlap between destination & source are detected
	#endif
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	chk_overlap_mem(dest, (void *)src, n);
	i = 0;
	while (i < n)
	{
		*(char*)dest = *(char*)src;
		++i;
	}
	return dest;
}

int main () {
	char src1[] = "1234";
	//char src2[] = "1234";
	char dst1[] = "0000";
	//char dst2[] = "0000";
	
	/* normal case */
	printf("Before   memcpy dest = %s\n", dst1);
	printf("After    memcpy dest = %s\n", (char*) memcpy(dst1, src1, 4));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(dst2, src2, 4));
	
	/* stack smashing error */
	//printf("Before   memcpy dest = %s\n", dst1);
	//printf("After    memcpy dest = %s\n", (char*) memcpy(dst1, src1, 30));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(dst2, src2, 30));  

	/* problem case (overlap) */
	//printf("Before   memcpy dest = %s\n", src1);
	//printf("After    memcpy dest = %s\n", (char*) memcpy(src1+1, src1, 4));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(src2+1, src2, 4));
	
	return(0);}
