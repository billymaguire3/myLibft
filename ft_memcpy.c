/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:30:18 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 15:23:40 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memcpy copies n bytes from memory area src to memory area dst. If dst
** and src overlap, behavior is undefined.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*mydst;
	char	*mysrc;

	mydst = (char *)dst;
	mysrc = (char *)src;
	i = 0;
	while (i < n)
	{
		mydst[i] = mysrc[i];
		i++;
	}
	return (dst);
}
