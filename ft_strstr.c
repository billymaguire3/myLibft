/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:16:39 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 16:05:40 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strstr locates the first occurrence of the null-terminated string
** needle in the null-terminated string haystack (using ft_memcmp).
** If needle is an empty string, haystack is returned; if needle occurs
** nowhere in haystack, NULL is returned; otherwise a pointer to the first
** character of the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	size_t len;

	len = ft_strlen(needle);
	while (*haystack)
	{
		if (!ft_memcmp((char *)haystack, (char *)needle, len))
			return (haystack);
		haystack++;
	}
	return (0);
}
