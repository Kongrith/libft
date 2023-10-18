/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:43:43 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/18 16:40:07 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	/*
	// your strlcat return value is false
	char *src = "aaa";
	char dst1[20];
	char dst2[20];
	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));
	printf("original buff1: %s\n", dst1);
	printf("original buff2: %s\n", dst2);
	strlcat(dst1, src, 20);
	strlcat(dst1, src, 20);
	ft_strlcat(dst2, src, 20);
	ft_strlcat(dst2, src, 20);
	printf("strlcpy   : %ld\n", strlcat(dst1, src, 20));
	printf("ft_strlcpy: %ld\n", ft_strlcat(dst2, src, 20));
	//printf("%d\n", memcmp(buff1, buff2, 20));
	printf("buff1: %s\n", dst1);
	printf("buff2: %s\n", dst2);
	*/

	/*
	Before :                  || After :
	dst   | src       | size  || dst         | return
	--------------------------||---------------------
	42\0  | bangkok\0 | 0     || 42\0        | 7         <--- length of src	
	42\0  | bangkok\0 | 1     || 42\0        | 8
	42\0  | bangkok\0 | 2     || 42\0        | 9
	42\0  | bangkok\0 | 3     || 42\0        | 9
	42\0  | bangkok\0 | 4     || 42b\0       | 9
	42\0  | bangkok\0 | 5     || 42ba\0      | 9
	42\0  | bangkok\0 | 6     || 42ban\0     | 9
	42\0  | bangkok\0 | 7     || 42bang\0    | 9
 	42\0  | bangkok\0 | 8     || 42bangk\0   | 9
	42\0  | bangkok\0 | 9     || 42bangko\0  | 9
	42\0  | bangkok\0 | 10    || 42bangkok\0 | 9
	42\0  | bangkok\0 | 11    || 42bangkok\0 | 9
    */
	//char dest[12] = "42";
	//char src[] = "bangkok";
	//printf("%ld\n", strlcat(dest, src, 11));
	//printf("dest: %s", dest);
	//char *dest1 = NULL;
	//char *dest2 = NULL;	
	char src[] = "nyan !";
	//printf("%ld\n", strlcat(NULL, src, 2));
	//printf("dest1: %s\n", dest1);
	printf("%ld\n", ft_strlcat(NULL, src, 0));
	//printf("dest: %s", dest2);
	return(0);
}
