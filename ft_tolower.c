/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:10:55 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/05 14:47:17 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <ctype.h>
#include <stdio.h>
*/
int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int main()
{
    int j = 0;
    char str[] = "GeEks@123\n";
    char ch;
 
    while (str[j] != '\n') {
        ch = str[j];
        putchar(tolower(ch));
        j++;
    }
	printf("\n");
	j = 0;
	while (str[j] != '\n') {
		ch = str[j];
		putchar(ft_tolower(ch));
		j++;
	}
    return 0;
}*/
