/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:45:50 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/16 12:08:15 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// function from ctype.h
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

// function from string.h
size_t	ft_strlen(char *str);
void	*ft_memset (void *dest, int c, size_t len );
void	*ft_bzero (void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest0, const void *src0, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strlcat(char *dest, char *src);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
//memcmp
//strnstr
int		ft_atoi(char *str);

// function from stdlib.h
//calloc
//strdup

// custom function from 42bangkok
//substr
//strjoin
//strtrim
//split
//itoa
//strmapi
//striteri
//putchar_fd
//putstr_fd
//putendl_fd
//putnbr_fd

#endif
