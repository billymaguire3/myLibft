/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:29:15 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 15:20:26 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memcmp compares byte string s1 against byte string s2.  Both strings
** are assumed to be n bytes long. The function returns zero if the two strings
** are identical, otherwise returns the difference between the first two
** differing bytes (treated as unsigned char values).
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*str1 != *str2)
			return (str1 - str2);
		str1++;
		str2++;
	}
	return (0);
}
