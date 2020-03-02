/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:43:54 by wimaguir          #+#    #+#             */
/*   Updated: 2020/03/02 14:56:23 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) obtained by spliting s
** using the character c as a delimiter. If the allocation fails the function
** returns NULL.
*/

#include "libft.h"

static size_t		word_count(char const *s, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (s[i] == c)
		i++;
	if (s[i] != '\0')
		wc++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			wc++;
		i++;
	}
	return (wc);
}

static size_t		word_length(char const *s, char c)
{
	int	length;

	length = 0;
	while (*s != c && *s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		wl;
	int		size;
	int		i;

	i = 0;
	if (!s)
		return (0);
	size = word_count(s, c);
	if (!(fresh = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		while (*s == c && *s != '\0')
			s++;
		wl = word_length(s, c);
		fresh[i] = ft_strsub(s, 0, wl);
		if (!(fresh[i]))
			return (0);
		s = s + wl;
		i++;
	}
	fresh[i] = 0;
	return (fresh);
}
