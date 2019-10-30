/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:58:38 by wimaguir          #+#    #+#             */
/*   Updated: 2019/10/28 16:16:47 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	res;
	char	*fullname;

	i = ft_strlen(dst);
	res = ft_strlen(src);
	if (dstsize == 0)
	{
		return (res);
	}
	res = res + i;
	i = 0;
	fullname = ft_strcat(dst, src);
	while (i < dstsize)
	{
		if (i == dstsize)
			fullname[i] = '\0';
		i++;
	}
	dst = fullname;
	return (res);
}
