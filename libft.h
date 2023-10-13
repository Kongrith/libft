/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:45:50 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/13 14:15:39 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* */
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

void			*ft_bzero (void *s, size_t n);
//void			*ft_memcpy(void *dest, void *src, size_t n);
void			*ft_memmove(void *dest0, const void *src0, size_t n);
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strcat(char *dest, char *src);

/* */
size_t			ft_strlen(char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);

#endif
