/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <kkomasat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:03 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/12 04:11:07 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy
copy a memory block where source and destination do not overlap */

#include "libft.h"

int	chk_overlap_mem(char *dest, const char *src, size_t n)
{
	char		*x;
	const char	*y;
	size_t		i;

	x = dest;
	y = src;
	i = 0;
	while (i < n)
	{
		if (x + i == y || y + i == x)
		{
			return (1);
		}
		++i;
	}
	return (0);
}

void	*ft_memcpy(void *dest0, const void *src0, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	dest = (char *) dest0;
	src = (const char *) src0;
	if (n == 0 || dest == src)
		return (dest);
	if (n > ft_strlen(dest))
	{
		write(1, "Error: destination memory block \
		not adequate cause overflow occur !!\n", 69);
		exit(1);
	}
	if (chk_overlap_mem(dest, src, n) == 1)
		write(1, "Warning: memory overlap \
		cause unexpected behaviour occur !!\n", 60);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
/*
int main () {
	char src1[] = "1234";
	char src2[] = "1234";
	char dst1[] = "0000";
	char dst2[] = "0000";
	
	normal case
	printf("Before   memcpy dest = %s\n", dst1);
	printf("After    memcpy dest = %s\n", (char*) memcpy(dst1, src1, 4));
	printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(dst2, src2, 4));
	
	stack smashing error
	//printf("Before   memcpy dest = %s\n", dst1);
	//printf("After    memcpy dest = %s\n", (char*) memcpy(dst1, src1, 30));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(dst2, src2, 30));  

	problem case (overlap)
	//printf("Before   memcpy dest = %s\n", src1);
	//printf("After    memcpy dest = %s\n", (char*) memcpy(src1+1, src1, 3));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(src2+1, src2, 3));
	
	return(0);
}*/
