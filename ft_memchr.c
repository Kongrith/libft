/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 23:57:42 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/16 13:48:14 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memchr
search for a byte with "c" in the pointer string with specific blocks.

*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	ptr = (char *) s;
	while (*ptr != '\0' && n > 0)
	{
		if (*ptr == c)
			return (ptr);
		++ptr;
		--n;
	}
	return (ptr = NULL);
}
/*
int	main()
{
	char str1[]="cat on the table.";
	char c = 'o';
	printf("original: %s\n", str1);
	printf("memchr   : %s\n", (char *) memchr(str1, c, 0));
	printf("ft_memchr: %s\n", (char *) ft_memchr(str1, c, 0));
	return(0);
}*/
