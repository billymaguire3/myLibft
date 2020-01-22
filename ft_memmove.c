/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:36:20 by wimaguir          #+#    #+#             */
/*   Updated: 2019/12/04 20:01:16 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*mydst;
	char	*mysrc;
	size_t	i;

	mydst = (char *)dst;
	mysrc = (char *)src;
	if (dst == src)
		return (dst);
	else if (dst > src)
	{
		i = len;
		while (i-- > 0)
			mydst[i] = mysrc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			mydst[i] = mysrc[i];
			i++;
		}
	}
	return (dst);
}
