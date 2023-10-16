/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:43:43 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/15 23:56:18 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
int main () {
	char src1[] = "0123456789";
	char src2[] = "0123456789";
	printf("Before   memcpy dest = %s\n", src1);

	char *ans1 = memmove(src1+5, src1, 5);
	char *ans2 = ft_memmove(src2+5, src2, 5);

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

int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "abb";
	char    str3[] = "abb";
	char    str4[] = "abc";
	char    str5[] = "abb";
	char    str6[] = "abb";
	printf("case0: zero block\n");
	printf("strncmp   :%d\n", strncmp(str1, str2, 0));
	printf("ft_strncmp:%d\n", ft_strncmp(str1, str2, 0));
	printf("case1: greater\n");
	printf("strncmp   :%d\n", strncmp(str1, str2, 3));
	printf("ft_strncmp:%d\n", ft_strncmp(str1, str2, 3));
	printf("case2: less than\n");
	printf("strncmp   :%d\n", strncmp(str3, str4, 3));
	printf("ft_strncmp:%d\n", ft_strncmp(str3, str4, 3));
	printf("case3: equal\n");
	printf("strncmp   :%d\n", strncmp(str5, str6, 3));
	printf("ft_strncmp:%d\n", ft_strncmp(str5, str6, 3));
	return (0);
}
