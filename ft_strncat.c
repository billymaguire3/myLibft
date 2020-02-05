/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:35:05 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/05 12:30:48 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strncat appends a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating `\0'.  The string
** s1 must have sufficient space to hold the result.
** ft_strncat appends not more than n characters from s2, and then adds a
** terminating `\0'.
*/

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
