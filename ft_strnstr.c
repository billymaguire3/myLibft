/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:42:11 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 15:26:29 by wimaguir         ###   ########.fr       */
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
	char	*large;
	char	*small;
	size_t	i;
	size_t	j;

	large = (char *)haystack;
	small = (char *)needle;
	i = 0;
	j = 0;
	if (*small == 0)
		return (large);
	while (large[i])
	{
		j = 0;
		while (large[i] == small[j] && large[i] && i < len)
		{
			i++;
			j++;
		}
		if (small[j] == 0)
			return (&large[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
