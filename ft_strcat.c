/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:57:07 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 15:43:32 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strcat appends a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating `\0'.  The string s1 must
** have sufficient space to hold the result.
*/

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
