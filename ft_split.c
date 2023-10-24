/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:44:45 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/24 02:32:01 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	ft_split
*	string:		"Hello,World,Split,Me"
*	delimeter:	','
*	return:		["Hello", "World", "Split", "Me", NULL]
*/

#include "libft.h"
#include <stdio.h>

size_t	count_char_section(char *ptr, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while(*(ptr + i) != '\0')
	{
		//printf("%c", *(ptr + i));
		if ( *(ptr + i) != c)
		{
			while( (*(ptr + i) != c) && (*(ptr + i) != '\0'))
			{
				++i;
			}
			++count;
		}
		else
		{
			++i;
		}
	}
	return (count);
}

char	*find_string(char *ptr, char c)
{
	size_t	i;
	size_t  char_flag;
	
	if (ptr[0] == c)
		char_flag = 0;
	else
		char_flag = 1;
	printf("find string - char flag:%ld\n", char_flag);
	i = 0;
	//printf("find string\n");
	while (*(ptr + i) != '\0')
	{
		//printf("%ld\n", i);
		if (char_flag == 1)
		{
			//while ( (*(ptr + i) != c) && (*(ptr + i) != '\0'))
			//{
			//	++i;
			//}
			//printf("i: %ld\n", i);
			return (ptr + i);
		}
		else
		{
			while ( (*(ptr + i) == c) && (*(ptr + i) != '\0'))
			{
				++i;
			}
			return (ptr + i);
		}	
	}
	return (0);
}

char	*split_string(char *s, char c)
{
	char	*string;
	char	*ptr;
	size_t	len;
	size_t	char_flag;
	size_t	i;

	ptr = s;
	if (ptr[0] == c)
		char_flag = 0;
	else
		char_flag = 1;
	//printf("split string - char flag:%ld\n", char_flag);
	len = 0;
	i = 0;
	while (*(ptr + i) != '\0')
	{
		//printf("%s\n", ptr + i);
		if (char_flag == 0)
		{
			//printf("%ld\n", i);
			if (*(ptr + i) == c)
			{
				//printf("case1 %ld\n", i);
				++i;
				++s;
			}
			else
			{
				//printf("case2 %ld\n", i);
				while ( (*(ptr + i) != c) && (*(ptr + i) != '\0')) 
				{
					++i;
					++len;
				}
				printf("len: %ld\n", len);
				string = (char *)malloc(sizeof(char) * (len + 1));
				ft_strlcpy(string, s, len+1);
				printf("%s\n", string);
				return(string);
			}
		}
		else
		{
			//printf("%ld\n", i);
			while ( (*(ptr + i) != c) && (*(ptr + i) != '\0'))
			{
				++i;
				++len;
			}
			string = (char *)malloc(sizeof(char) * (len + 1));
			ft_strlcpy(string, s, len+1);
			return(string);
		}
	}
	string = (char *)malloc(sizeof(char) * (len + 1));
	ft_strlcpy(string, s, len+1);
	return(string);
}

char    **ft_split(char const *s, char c)
{
	char	**string_array;
	char	*ptr;
	size_t	num_split;
	size_t	i;
	
	if (s == NULL)
		return (NULL);
	else
		ptr = (char *) s;
	num_split = count_char_section(ptr, c);
	//printf("len:%ld\n", num_split);
	string_array = (char **) malloc (sizeof(char *) * (num_split + 1));
	if (string_array == NULL)
		return (NULL);
	else
		string_array[num_split + 1] = NULL;
	i = 0;
	ptr = find_string(ptr, c);
	while (i < num_split)
	{
		//printf("string array: %ld\n", i);
		string_array[i] = split_string(ptr, c);
		ptr = find_string(ptr, c);
		++i;
	}
	return (string_array);
}
/*
int	main()
{
	char	*s1 = "Hello,World,Split,Me";
	char	delimiter = ',';
	char	**pointer_arrays;
	pointer_arrays = ft_split(s1, delimiter);
	printf("original: %s\n", s1);
	for(int i = 0; i<4; i++)
      printf("%s\n", pointer_arrays[i]);
	//printf("ft_split: %s\n", ft_split(s1, delimiter)[0]);
}*/
