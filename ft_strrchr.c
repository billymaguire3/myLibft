/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:15:54 by wimaguir          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/01/08 17:54:52 by wimaguir         ###   ########.fr       */
=======
/*   Updated: 2019/10/31 12:53:05 by wimaguir         ###   ########.fr       */
>>>>>>> bc74bcfe793049a001e2560329c5acbd1a9a8f1b
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
<<<<<<< HEAD
	int		len;
	char	*occur;

	len = ft_strlen(s);
	occur = (char *)s;
	while (len > 0 && occur[len] != c)
		len--;
	if (occur[len] == c)
		return (&occur[len]);
=======
	int n;

	n = ft_strlen(s);
	while (n > 0 && s[n] != c)
		n--;
	if (s[n] == c)
		return ((char *)&s[n]);
>>>>>>> bc74bcfe793049a001e2560329c5acbd1a9a8f1b
	return (NULL);
}
