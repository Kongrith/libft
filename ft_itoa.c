/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:51:54 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/26 15:05:54 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <limits.h>
//#include <string.h>
int count_digit(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
	{
		//printf("0\n");
		return(digit = 1);
	}
	while (n != 0)
	{
		n /= 10;
		++digit;
	}
	return (digit);	
}

char *generate_string(int n, int positive_flag)
{
	char	*s;
	int		abs_value;
	int		size;
	int		i;

	if (!positive_flag)
	{
		abs_value = n * -1;
		size = count_digit(abs_value) + 1;
	}
	else
	{
		abs_value = n;
		size = count_digit(abs_value);
	}
	//printf("size:%d\n", size);
	s = malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	i = size;
	while (i >= 0)
	{
		if (i == size)
		{
			*(s + i) = '\0';
			//printf("i:%d value: %d  mod %d:\n", i, abs_value, abs_value % 10);
		}
		else if (i == 0 && positive_flag == 0)
		{
			*(s + i) = (char)'-';
		}
		else
		{
			*(s + i) = abs_value % 10 + '0';
			//printf("i:%d value: %d  mod %d:\n", i, abs_value, abs_value % 10);
			abs_value /= 10;
		}
		--i;
	}
	//printf("generate string: %s\n", s);
	return (s);	
}

char    *ft_itoa(int n)
{
	char	*s;
	int		positive_flag;
	//printf("%d\n", n);
	if (n == -2147483648)
	{
		//printf("min case\n");
		s = malloc(sizeof(char) * (12));
		if (!s)
			return (NULL);
		ft_strlcpy(s, "-2147483648", 12);
		//printf("s: %s\n", s);
		return (s);
	}
	if (n >= 0)
	{
		//printf("positive\n");
		positive_flag = 1;
	}
	else
	{
		//printf("negative\n");
		positive_flag = 0;
	}
	s = generate_string(n, positive_flag);
	//printf("ft_itoa: %s\n", s);
	return (s);
}
/*
int	main()
{
	int		n;
	char	*ans;

	n = -2147483648;
	ans = ft_itoa(n);
	printf("INT_MIN:%d vs %d\n", INT_MIN, n);
	printf("ft_itoa:%s\n", ans);
	free(ans);
	return(0);
}*/
