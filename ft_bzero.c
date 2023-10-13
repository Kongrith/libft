/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:50:54 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/13 14:32:32 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_bzero (void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;
	/*
	char msg;
	if (n > ft_strlen(s) + 1)
	{
		write(1, "warning: '__builtin_memset' writing ", 36);
		msg = n + '0';
		write(1, &msg, 1);
		write(1, " bytes into a region of size ", 29);
		msg = ft_strlen(s) + 1 + '0';
		write(1, &msg, 1);
		write(1, " overflows the destination\n", 27);
	}*/
	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)  
	{
		*(ptr + i) = (unsigned int) 0;
		++i;
	}
	return s;
}  
/*
int main(void) 
{ 
    char str1[40] = "GeeksForGeeks is for programming geeks.";
	char str2[40] = "GeeksForGeeks is for programming geeks.";
    //printf("%d\n", (int) ft_strlen(str1));
	printf("Before   bzero(): %s \n", str1); 
  
    bzero(str1 + 31, 8); 
    printf("After    bzero(): %s\n", str1); 
    ft_bzero(str2 + 31, 10);
	printf("After ft_bzero(): %s\n", str2);
	return 0; 
}*/
