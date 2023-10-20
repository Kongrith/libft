/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:42:39 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/21 00:30:51 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	max;
	
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));

	max = ft_strlen((char *) s1) - ft_strlen((char *) set) + 1;
	ptr = (char *) malloc(sizeof(char) * (ft_strlen((char *) s1) + 1));
	if (ptr == NULL)
		exit(0);
		
	//if (ft_strlen((char *) set) == 0)
	//	return (ft_strdup(s1));
	//printf("original ptr: %s\n", ptr);	
	i = 0; 
	while (i < max)
	{
		j = 0;
		//printf("i: %ld ", i);
		if (s1[i + j] != set[j])
			ptr[i] = s1[i];
		else
		{
			while (s1[i + j] == set[j])
			{
				//printf("j:%ld %c ", j, set[j]);
				++j;
				if (set[j] == '\0')
				{
					ft_memmove( &ptr[i], &s1[i + ft_strlen((char *) set)], ft_strlen((char *) s1) - i  - ft_strlen((char *) set));
					i += ft_strlen((char *) set);
				}	
			}
		}
		//printf("\n");
		//printf("%s\n", ptr);
		if (set[j] != '\0')
			++i;
	}
	ptr[max] = '\0';
	return (ptr);
}
/*
int	main()
{
	char *str1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *str2 = "Hello \t  Please\n Trim me !";
	//char	*str1 = "abcdefg";
	//char	*str2 = "de";
	printf("len_src: %ld\n", ft_strlen(str1));
	printf("len_pattern: %ld\n", ft_strlen(str2));
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("########\n");
	printf("ft_strtrim: %s\n", ft_strtrim(str1, str2));
	return(0);
};*/
