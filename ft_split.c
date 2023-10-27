/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:44:45 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/27 12:35:11 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	ft_split
*	string:		"Hello,World,Split,Me"
*	delimeter:	','
*	return:		["Hello", "World", "Split", "Me", NULL]
*/

#include "libft.h"

void	freemem(char **string_array, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		free(string_array[i]);
		i++;
	}
	free(string_array);
}

size_t	count_char_section(char *ptr, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(ptr + i) != '\0')
	{
		if (*(ptr + i) != c)
		{
			while ((*(ptr + i) != c) && (*(ptr + i) != '\0'))
				++i;
			++count;
		}
		else
			++i;
	}
	return (count);
}

char	*find_chr_or_delimiter(char *ptr, char c, int string_flag)
{
	size_t	i;

	i = 0;
	while (ptr[i] != '\0')
	{
		if (string_flag == 1)
		{
			if (ptr[i] != c)
				return (ptr + i);
		}
		else
		{
			if (ptr[i] == c)
				return (ptr + i);
		}
		++i;
	}
	return (0);
}

char	*split_string(char *s, char c)
{
	char	*string;
	char	*ptr;
	size_t	len;

	ptr = s;
	len = 0;
	while ((ptr[len] != c) && (ptr[len] != '\0'))
		++len;
	string = malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	ft_strlcpy(string, s, len + 1);
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**string_array;
	char	*ptr;
	size_t	num_split;
	size_t	i;
	int		string_flag;

	if (!s || !*s)
	{
		string_array = malloc(sizeof(char *) * 1);
		if (!string_array)
			return (NULL);
		*string_array = (void *)0;
		return (string_array);
	}
	ptr = (char *) s;
	num_split = count_char_section(ptr, c);
	string_array = (char **) malloc (sizeof(char *) * (num_split + 1));
	if (!string_array)
		return (NULL);
	string_array[num_split] = NULL;
	i = 0;
	while (i < num_split)
	{
		if (ptr[0] == c)
		{
			ptr = find_chr_or_delimiter(ptr, c, 1);
			string_array[i] = split_string(ptr, c);
			if (string_array[i] == NULL)
			{
				freemem(string_array, num_split);
				return (NULL);
			}
			ptr = find_chr_or_delimiter(ptr, c, 0);
		}
		else
		{
			string_array[i] = split_string(ptr, c);
			if (string_array[i] == NULL)
			{
				freemem(string_array, num_split);
				return (NULL);
			}
			ptr = find_chr_or_delimiter(ptr, c, 1);
		}
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
