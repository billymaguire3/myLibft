/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:15:54 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/22 09:28:58 by wimaguir         ###   ########.fr       */
/*   Updated: 2019/10/31 12:53:05 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
