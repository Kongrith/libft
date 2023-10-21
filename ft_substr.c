/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:40:55 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/21 02:31:18 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = (char *) malloc( sizeof(char) * (len+1) );
	if (ptr == NULL) 
		return(NULL);
	if (start < 0)
		return ((char *)s);
	if ( (size_t)start > ft_strlen((char *) s) )
		return (ft_strdup(""));
	i = 0;
	while (i < len)
	{
		*(ptr + i) = s[start + i];
		++i;
	}
	*(ptr + i) = '\0';
	return (ptr);
}