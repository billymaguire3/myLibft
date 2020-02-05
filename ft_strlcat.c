/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:58:38 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/05 12:30:32 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strlcat appends string src to the end of dst.  It will append at most
** dstsize -strlen(dst) - 1 characters.  It will then NUL-terminate, unless
** dstsize is 0 or the original dst string was longer than dstsize
** (in practice this should not happen as it means that either dstsize is
** incorrect or that dst is not a proper string). If the src and dst strings
** overlap, the behavior is undefined.
*/

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
