/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:19:30 by kkomasat          #+#    #+#             */
/*   Updated: 2023/11/02 23:41:25 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	strrchr
*	locate last "ch" character in the pointer string.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ptr_match;

	ptr = (char *) s;
	ptr_match = NULL;
	//if (c == 0)
	//	return (ptr + ft_strlen(ptr));
	c = c % 256;
	while (*ptr != '\0')
	{
		if ((unsigned char)*ptr == (unsigned char)c)
			ptr_match = ptr;
		++ptr;
	}
	if (ptr_match != NULL)
		return (ptr_match);
	else if ((unsigned char)*ptr == (unsigned char)c)
		return (ptr);
	else
		return (NULL);
}
/*
int main () {
	// str = teste  ch = x    
	const char	str[] = "123456789";
	int ch = 'a'; 

	printf("original      : %s\n", str);
	printf("char: %c int %d\n", ch, ch);
	printf("strrchr    (%c) : %s\n", ch, strrchr(str, ch));
	printf("ft_strrchr (%c) : %s\n", ch, ft_strrchr(str, ch));
	return 0;
}*/
