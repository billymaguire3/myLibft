/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:24:32 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/05 16:52:47 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a copy of the string given as argument
** without whitespaces at the beginning or at the end of the string. The
** following characters ’ ’, ’\n’ and ’\t’ will be considered as whitespaces.
** If s has no whitespaces at the beginning or at the end, the function
** returns a copy of s. If the allocation fails the function returns NULL.
*/

#include "libft.h"

int		white_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		first_position(char const *str)
{
	int i;

	i = 0;
	while (white_space(str[i]))
		++i;
	return (i);
}

int		last_position(char const *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (white_space(str[i]))
		--i;
	return (i);
}

int		fresh_len(const char *str)
{
	return(last_position(str) - first_position(str));
}


char	*ft_strtrim(char const *s)
{
	char	*fresh;
	int		i;
	int		len;
	int		start;

	i = 0;
	len = fresh_len(s) + 1;
	fresh = (char *)malloc(sizeof(char) * (len));
	start = first_position(s);
	if (s)
	{
		while (i < len)
			fresh[i++] = s[start++];
		fresh[i] = '\0';
	}
	return (fresh);
}
