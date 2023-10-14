/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:43:43 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/12 13:50:25 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	/*
	char c;
    c = 'Q';
    printf("%c is alphabet character: %d \n", c, ft_isalpha(c));

    c = 'q';
    printf("%c is digit: %d \n", c, ft_isdigit(c));

    c='+';
    printf("%c is numeric + alphabic: %d \n", c, ft_isalnum(c));
	*/
	char src1[] = "1234";
	char dst1[] = "0000";
	printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(dst1, src1, 4));
	return (0);
}
