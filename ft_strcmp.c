/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:41:33 by wimaguir          #+#    #+#             */
/*   Updated: 2020/03/02 15:39:43 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strcmp lexicographically compares the null-terminated strings s1 and s2.
** The return value is an integer greater than, equal to, or less than 0,
** according as the string s1 is greater than, equal to, or less than the
** string s2 based on ASCII value.
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
