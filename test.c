/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:43:43 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/13 14:40:13 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main () {
	char src1[] = "0123456789";
	char src2[] = "0123456789";
	printf("Before   memcpy dest = %s\n", src1);

	char *ans1 = memmove(src1-1, src1, 10);
	char *ans2 = memmove(src2-1, src2, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%c", ans1[i]);
	}
		printf("\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%c", ans2[i]);
	}
	printf("\n");
	
	return(0);
}
