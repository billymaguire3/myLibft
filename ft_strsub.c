/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:00:40 by wimaguir          #+#    #+#             */
/*   Updated: 2020/03/02 11:55:06 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a “fresh” substring from the string
** given as argument. The substring begins at index "start([0])" and is of
** size "len". If start and len aren’t refering to a valid substring, the
** behavior is undefined. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*fresh;
	unsigned int	i;

	i = 0;
	fresh = (char *)malloc((len + 1) * sizeof(char));
	if (s && fresh)
	{
		while (i < len)
		{
			fresh[i] = s[start];
			i++;
			start++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
