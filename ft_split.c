/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:44:45 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/24 21:15:51 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	ft_split
*	string:		"Hello,World,Split,Me"
*	delimeter:	','
*	return:		["Hello", "World", "Split", "Me", NULL]
*/

#include "libft.h"

static void	freemem(char *string_array)
{
	unsigned int	i;

	i = 0;
	while (string_array[i] != '\0')
	{
		free(string_array);
		i++;
	}
	free(string_array);
}

size_t  count_char_section(char *ptr, char c)
{
        size_t  count;
        size_t  i;

        count = 0;
        i = 0;
        while(*(ptr + i) != '\0')
        {
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

char    *find_delimiter(char *ptr, char c)
{
        size_t  i;

        i = 0;
        while (ptr[i] != '\0')
        {
                if (ptr[i] == c)
                        return (ptr + i);
                ++i;
        }
        return(0);
}

char    *find_string(char *ptr, char c)
{
        size_t  i;

        i = 0;
        while (ptr[i] != '\0')
        {
                if (ptr[i] != c)
                        return(ptr + i);
                ++i;
        }
        return (0);
}

char    *split_string(char *s, char c)
{
        char    *string;
        char    *ptr;
        size_t  len;

        ptr = s;
        len = 0;
		while ((ptr[len] != c) && (ptr[len] != '\0'))
			 ++len;
		//printf("len:%ld\n", len);
		string = malloc(sizeof(char) * (len + 1));
		if (!string)
			return (NULL);
		ft_strlcpy(string, s, len+1);
		//printf("ft_strlcpy:%s\n", string);
		return(string);
}

char    **ft_split(char const *s, char c)
{
        char    **string_array;
        char    *ptr;
        size_t  num_split;
        size_t  i;

        if (!s)
                return (NULL);
        ptr = (char *) s;
        num_split = count_char_section(ptr, c);
        //printf("num split:%ld\n", num_split);
        string_array = (char **) malloc (sizeof(char *) * (num_split + 1));
        if (!string_array)
                return (NULL);
		//string_array[num_split + 1] = NULL;
        //printf("string array:%s\n",string_array[5]);
        i = 0;
        while (i < num_split)
        {
                //printf("i:%ld\n", i);
                if (ptr[0] == c)
                {
                        //printf("case1: %s\n", ptr);
                        ptr = find_string(ptr, c);
                        //printf("find string:%s\n", ptr);
                        string_array[i] = split_string(ptr, c);
						if (string_array[i] == NULL)
						{
							freemem(string_array[i]);
							return (NULL);
						}
                        //printf("strign array:%s\n", string_array[i]);
                        ptr = find_delimiter(ptr, c);
                        //printf("find delimiter:%s\n", ptr);
                }
                else
                {
                        //printf("case2: %s\n", ptr);
                        string_array[i] = split_string(ptr, c);
                        if (string_array[i] == NULL)
						{
							freemem(string_array[i]);
							return(NULL);
						}
						ptr = find_delimiter(ptr, c);
                        //printf("find delimiter:%s\n", ptr);
                }
                ++i;
                //printf("\n");
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
