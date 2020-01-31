/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:15:54 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 16:02:06 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strrchr is identical to ft_strchr, except it locates the last
** occurrence of c.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*occur;

	len = ft_strlen(s);
	occur = (char *)s;
	while (len > 0 && occur[len] != c)
		len--;
	if (occur[len] == c)
		return (&occur[len]);
	return (NULL);
}
