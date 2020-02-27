/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:00:27 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 14:18:55 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memchr locates the first occurrence of c
** (converted to an unsigned char) in string s.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char b;

	b = (unsigned char)c;
	str = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*str == b)
			return (str);
		str++;
	}
	return (NULL);
}
