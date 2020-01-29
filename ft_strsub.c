/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:00:40 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/28 18:03:59 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *fresh;
	unsigned int i;

	i = 0;
	fresh = (char *) malloc((len + 1) * sizeof(char));
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
