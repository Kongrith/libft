/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:42:39 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/20 01:26:17 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	len;
	
	len = ft_strlen((char *) s1);	
	ptr = (char *) malloc(sizeof(char) * len + 1 );
	if (ptr == NULL)
		exit(0);

	(void) set;
	return (ptr);
}

#include <stdio.h>
int	main()
{
	char *str1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *str2 = "Hello \t  Please\n Trim me !";
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("ft_strtrim: %s\n", ft_strtrim(str1, str2));
	return(0);
}
