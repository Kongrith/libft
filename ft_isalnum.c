/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:38:52 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/03 14:00:08 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isalnum(char c)
{
	if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char a = 'a';
    printf("test %c  : %d %d \n", a, isalnum(a), ft_isalnum(a));
	int  b = 5;
	printf("test %d  : %d %d \n", b, isalnum(b), ft_isalnum(b));
	char c = '!';
	printf("test %c  : %d %d \n", c, isalnum(c), ft_isalnum(c));
	char  d = 'B';
	printf("test %c  : %d %d \n", d, isalnum(d), ft_isalnum(d));
	char  e = '5';
	printf("test '%c': %d %d \n", e, isalnum(e), ft_isalnum(e));

}*/
