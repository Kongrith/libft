/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:58:33 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/17 14:51:52 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strnstr
* Find the first occurrence of find in s, where the search is limited to the
* first len characters of s.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	static char	ans[10];	

	n_len = ft_strlen((char *) needle);	
	i = 0;
	while (i < len - ft_strlen((char *)needle) + 1)
	{
		j = 0;
		if( haystack[i + j] == needle[j] )
		{	
			while (haystack[i + j] == needle[j % n_len ])
			{
				*(ans + j) = needle[j % n_len ];
				++j;
			}
			*(ans + j) = '\0';
			if (j >= n_len)
				return (ans);
		}
		++i;
	}
	return(NULL);
}
/*
int	main()
{
	char str1[] = "ababcab";
	char pattern[] = "abc";
	printf("original: %s\n", str1);
	printf("strnstr   : %s\n", strnstr(str1, pattern, 7));
	printf("ft_strnstr: %s\n", ft_strnstr(str1, pattern, 7));
	return(0);
}*/
