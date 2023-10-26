/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:16:43 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/27 04:20:10 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memmove
copy a memory block where source and destination can overlap

a) backward copy
|_;_;_;_;_;_|          (source)
      |_;_;_;_;_;_|    (destination)
            <-<-<-^    start from the end to shift the values to the right

b) forward copy
      |_;_;_;_;_;_|    (source)
|_;_;_;_;_;_|          (destination)
^->->->                start from the beginning to shift the values to the left
*/

#include "libft.h"

void	*ft_memmove(void *dest0, const void *src0, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	dest = dest0;
	src = src0;
	if (n == 0 || dest == src)
		return (dest);
	if ((dest > src) && (src + n > dest))
	{
		i = n;
		while (i > 0)
		{
			dest[i - 1] = src[i - 1];
			--i;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			++i;
		}
	}
	return (dest);
}
