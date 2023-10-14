/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <kkomasat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:55:36 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/13 02:06:41 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memmove
copy a memory block where source and destination can overlap 

soln:
_;_;_;_;_;_|          (source)
     |_;_;_;_;_;_|    (destination)
           >-----^    start from the end to shift the values to the right

      |_;_;_;_;_;_|   (source)
|_;_;_;_;_;_|         (destination)
^-----<               start from the beginning to shift the values to the left

*/

#include "libft.h"
#include <string.h>
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

void	*ft_memmove(void *dest0, const void *src0, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	dest = (char *) dest0;
	src = (const char *) src0;
	if (n == 0 || dest == src)
		return (dest);
	if (n > ft_strlen((char *) src))
	{
		write(1, "Error: destination memory block \
		not adequate cause overflow occur !!\n", 69);
		exit(1);
	}
	if (chk_overlap_mem(dest, src, n) == 1)
		write(1, "Warning: memory overlap cause unexpected behaviour occur !!\n", 60);

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}

int main () {
	char src1[] = "0123456789";
	char src2[] = "0123456789";
	//char dst1[] = "0000";
	//char dst2[] = "0000";
	
	//normal case
	//printf("Before   memmove dest = %s\n", dst1);
	//printf("After    memmove dest = %s\n", (char*) memmove(dst1, src1, 4));
	//printf("After ft_memmove dest = %s\n", (char*) ft_memmove(dst2, src2, 4));
	
	//stack smashing error
	//printf("Before   memmove dest = %s\n", dst1);
	//printf("After    memmove dest = %s\n", (char*) memmove(dst1, src1, 30));
	//printf("After ft_memmove dest = %s\n", (char*) ft_memmove(dst2, src2, 30));  
	
	// forward copy	
	printf("Before   memcpy dest = %s\n", src1);
	printf("After    memcpy dest = %s\n", (char*) memmove(src1+1, src1, 10));
	printf("After ft_memcpy dest = %s\n", (char*) ft_memmove(src2+1, src2, 10));

	//problem case (overlap)
	//printf("Before   memcpy dest = %s\n", src1);
	//printf("After    memcpy dest = %s\n", (char*) memmove(src1+1, src1, 3));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memmove(src2+1, src2, 3));
	
	return(0);
}
