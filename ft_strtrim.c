/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:24:32 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/05 12:28:56 by wimaguir         ###   ########.fr       */
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

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	int		i;
	int		len;
	int		start;

	i = 0;
	len = ft_strlen(s) + 1;
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	start = first_position(s);
	if (s != NULL)
	{
		while (i < len)
			fresh[i++] = s[start++];
		fresh[i] = '\0';
	}
	return (fresh);
}
