/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:43:35 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/16 16:57:32 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcmp
compare memory area

*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	ptr1 = (char *) s1;
	ptr2 = (char *) s2;
	i = 0;	
	while ((ptr1[i] == ptr2[i]) && i < n)
	{
		if (ptr1[i] == '\0')
			return (0);
		if (++i == n)
			return(0);
	}
	return (ptr1[i] - ptr2[i]);
}
/*
int	main()
{
	char str1[] = "abcf";
	char str2[] = "abcdg";

	printf("memcmp   : %d\n", memcmp(str1, str2, 4));
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 4));
	return(0);
}*/
