/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:41:55 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/03 02:35:16 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	length;

	length = 0;
	while (*(dest + length) != '\0')
		++length;
	index = 0;
	while (*(src + index) != '\0')
	{
		*(dest + index + length) = *(src + index);
		++index;
	}
	*(dest + index + length) = '\0';
	return (dest);
}

int	count(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		++i;
	return (i);
}

int	sentence_length(int size, char **strs, char *sep)
{
	int	sep_length;
	int	word_length;	
	int	i;

	sep_length = count(sep);
	i = 0;
	word_length = 0;
	while (strs[i] != NULL && i < size)
	{
		word_length += count(strs[i]);
		++i;
	}
	return ((sep_length * (size - 1)) + word_length + 1);
}

char	*handle_join(int size, char **strs, char *sep, char *sentence)
{
	int	i;
	int	length;

	length = sentence_length(size, strs, sep);
	if (size == 1)
	{
		sentence = ft_strcat(sentence, strs[0]);
		sentence[length -1] = '\0';
		return (sentence);
	}
	i = 0;
	while (i < size)
	{
		sentence = ft_strcat(sentence, strs[i]);
		if (i != size -1 && sep != NULL)
		{
			sentence = ft_strcat(sentence, sep);
		}
		++i;
	}
	sentence[length -1] = '\0';
	return (sentence);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*sentence;

	if (size <= 0)
	{
		return ((char *) malloc(sizeof(char)));
	}
	if (size == 1)
		length = count(strs[0]);
	else
		length = sentence_length(size, strs, sep);
	sentence = (char *) malloc(sizeof(char) * length);
	i = 0;
	while (sentence[i] != '\0')
	{
		sentence[i] = 0;
		++i;
	}
	if (sentence == NULL)
		return (0);
	sentence = handle_join(size, strs, sep, sentence);
	return (sentence);
}
/*
int	main(void)
{
	char	*strs[] = {"Hello", "world", "!"};
	//char	*s;
	//char *strs[] = (char*[]) {"Hello"};
	//char *strs = ft_strjoin(2, strs, "");
	//s = ft_strjoin(3, strs, ", ");
	//printf("%s", s);
	//free(s);


	s = ft_strjoin(3, strs, ", ");
	printf("%s", s);
	free(s);
	s = ft_strjoin(3, strs, ", ");
	printf("%s", s);
	free(s);

	printf("%s\n", ft_strjoin(2, strs, " "));
	return (0);
}*/
