/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:19:14 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/03 02:36:04 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	char			char_s1;
	char			char_s2;

	if (n <= 0)
		return (0);
	index = 0;
	while (*(s1 + index) != '\0' && *(s2 + index) != '\0' && index < n)
	{
		if (*(s1 + index) != *(s2 + index))
			break ;
		++index;
	}
	if (index == n)
		--index;
	char_s1 = *(s1 + index);
	char_s2 = *(s2 + index);
	if (char_s1 == char_s2)
		return (0);
	else if (char_s1 > char_s2)
		return (char_s1 - char_s2);
	else
		return (char_s1 - char_s2);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "abb";
	(void) str1;
	(void) str2;
	printf("%d ", strncmp(str1, str2, 2));
	return (0);
}

