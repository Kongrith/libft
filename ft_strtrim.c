/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:42:39 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/21 17:18:01 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*custom_strstr(char *str, char *substr)
{
	static char	*ptr;

	//if ((ft_strlen(str) == 0) && (ft_strlen(substr) == 0))
	//	return("");	
	ptr = str;
	while (*ptr)
	{
		if (ft_strncmp(ptr, substr, ft_strlen(substr)) == 0)
			return (ptr);
		++ptr;
	}
	return (0);
}

void custom_strcat(char *dest, size_t len)
{
	size_t	i;

	i = 0;
	while (dest[i + len] != '\0')
	{
		printf("%c\n", dest[i + len]);
		dest[i] = dest[i + len];
		++i;
	}
	dest[i] = '\0';
}

void ft_removesubstr(char *str, char *substr)
{
	char	*ptr;
	size_t	i;

	i = 0;
	//ptr = ft_strstr( &str[i], substr);
	while ( i < (ft_strlen(str) - ft_strlen(substr) + 1))
	{
		ptr = custom_strstr( &str[i], substr);
		if (ptr)
		{
			printf("ptr:%c\n", ptr[i]);
			custom_strcat(ptr, 2);
			i = i + ft_strlen(substr); 
		}
		else
		{
			++i;
		}
	}
}


char *ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;

	if (!s1)
		return (NULL);
	if (ft_strlen((char *) s1) == 0)
		return(0);
	if (!set || ft_strlen((char *) set) == 0)
		return (ft_strdup(s1));

	ptr = (char *) malloc(sizeof(char) * (ft_strlen( (char *) s1) + 1));
	if (!ptr)
		return (NULL);
	ptr = (char *) s1;
	ft_removesubstr(ptr, (char *) set);
	//printf("s1 :%p\n", s1);
	//printf("ptr:%p\n", ptr);
	return ((char *) s1);
}

/*
int main()
{
    char str[] = "abcdefgh";
	char substr[] = "de";
	
	printf("%s\n", ft_strtrim(str, substr));

    ptr = ft_strstr(str, substr);
    if (ptr != NULL)
        printf("%s\n", ptr);
    else
        printf("not found\n");
*/

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	max;
	
	if (!s1)
		return (NULL);
	if (ft_strlen((char *) s1) == 0)
		return(0);
	if (!set || ft_strlen((char *) set) == 0)
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
}*/
