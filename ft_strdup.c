/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:06:13 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/18 22:09:29 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
