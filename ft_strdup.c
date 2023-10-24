/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:06:13 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/24 18:59:56 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	strdup:
*	save a copy of a string
*
*/


#include "libft.h"
/*
char	*ft_strdup(const char *s1)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen((char *)s1) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (0);
	rtn = ft_memcpy(rtn, s1, len);
	return (rtn);
}*/

char    *ft_strdup(const char *src)
{
	char	*dest;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	p = dest;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
