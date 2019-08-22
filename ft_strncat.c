/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:35:05 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/22 11:21:36 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		len;
	size_t	x;

	i = 0;
	len = (ft_strlen(dest));
	x = 0;
	while (src[i] != '\0' && (x < n))
	{
		dest[len++] = src[i++];
		x++;
	}
	dest[len] = '\0';
	return (dest);
}
