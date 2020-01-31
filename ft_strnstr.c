/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:42:11 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 16:07:39 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strnstr locates the first occurrence of the null-terminated string
** needle in the string haystack, where not more than len characters are
** searched. Characters that appear after a `\0' character are not searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n_len;

	if (*needle == '\0')
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	while (*haystack && len-- >= n_len)
	{
		if (!ft_strncmp((char *)haystack, (char *)needle, len))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
