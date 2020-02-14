/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:32:35 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/13 16:50:17 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns an fresh of “fresh” ss
** (all ending with '\0', including the fresh itself) obtained by spliting
** using the character c as a delimiter. If the allocation fails the function
** returns NULL.
*/

#include "libft.h"

size_t		word_count(char const *s, char c)
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

size_t		word_length(char const *s, char c)
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

char		**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		wl;
	int		size;
	int		i;

	size = word_count(s, c);
	i = 0;
	if (!s)
		return (0);
	fresh = (char **)malloc(sizeof(char *) * (size + 1));
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
