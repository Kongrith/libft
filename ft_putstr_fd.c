/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:13:03 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:34:06 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		exit(0);
	write(fd, s, ft_strlen(s));
}
/*
int	main()
{
	char s[] = "abcd";
	ft_putstr_fd(s, 1);
	return(0);
}*/
