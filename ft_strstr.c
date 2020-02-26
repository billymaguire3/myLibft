/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:16:39 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 18:04:24 by wimaguir         ###   ########.fr       */
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

char	*ft_strstr(const char *haystack, const char *needle)
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
		while (large[i] == small[j] && large[i])
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
