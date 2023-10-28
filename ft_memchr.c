/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 23:57:42 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:28:44 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memchr
search for a byte with "c" in the pointer string with specific blocks.
*
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (n > 0)
	{
		if (*ptr == c)
			return ((void *) ptr);
		++ptr;
		--n;
	}
	return (0);
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
