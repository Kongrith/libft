/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:19:30 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/15 15:58:47 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* strchr
locate first "ch" character in the pointer string.

*/

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	ptr = (char *) s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		++ptr;
	}
	return (NULL);
}
/*
int main () {
	const char	str1[] = "This is just a String";
	const char  str2[] = "This is just a String";
	const char	ch = 'S'; 

	printf("original      : %s\n", str1);
	printf("strchr    (%c) : %s\n", ch, strchr(str1, ch));
	printf("ft_strchr (%c) : %s\n", ch, ft_strchr(str2, ch));
	return 0;
}*/
