/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:19:30 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:25:49 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	strrchr
*	locate last "ch" character in the pointer string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	*ptr_match;

	ptr = (char *) s;
	ptr_match = NULL;
	i = ft_strlen(ptr);
	if (c == 0)
		return (ptr + i);
	while (*ptr != '\0')
	{
		if (*ptr == c)
			ptr_match = ptr;
		++ptr;
	}
	return (ptr_match);
}
/*
int main () {
	const char	str1[] = "This is just a String";
	const char  str2[] = "This is just a String";
	const char	ch = 'a'; 

	printf("original      : %s\n", str1);
	printf("strrchr    (%c) : %s\n", ch, strrchr(str1, ch));
	printf("ft_strrchr (%c) : %s\n", ch, ft_strrchr(str2, ch));
	return 0;
}*/
