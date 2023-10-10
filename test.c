/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:43:43 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/03 14:09:45 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char c;
    c = 'Q';
    printf("%c is alphabet character: %d \n", c, ft_isalpha(c));

    c = 'q';
    printf("%c is digit: %d \n", c, ft_isdigit(c));

    c='+';
    printf("%c is numeric + alphabic: %d \n", c, ft_isalnum(c));
	return (0);
}
