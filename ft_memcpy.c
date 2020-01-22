/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:30:18 by wimaguir          #+#    #+#             */
/*   Updated: 2019/12/04 19:54:46 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
