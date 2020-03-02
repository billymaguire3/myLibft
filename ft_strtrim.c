/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:24:32 by wimaguir          #+#    #+#             */
/*   Updated: 2020/03/02 12:23:43 by wimaguir         ###   ########.fr       */
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

char	*ft_strtrim(char const *s)
{
	char			*fresh;
	unsigned int	i;
	int				begin;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	begin = i;
	if (s[begin] == '\0')
	{
		fresh = ft_strnew(0);
		fresh[0] = '\0';
		return (fresh);
	}
	while (s[i] != '\0')
		i++;
	i--;
	while (ft_isspace(s[i]))
		i--;
	if (!(fresh = (ft_strsub(s, begin, i - begin + 1))))
		return (NULL);
	return (fresh);
}
