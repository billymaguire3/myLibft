/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:39:00 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/21 16:16:10 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include <ctype.h>

int		ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		ft_atoi(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isascii(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int len);
char	*ft_strdup(const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);

#endif
