/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:21:15 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 16:00:24 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** fty_strchr locates the first occurrence of c (converted to a char) in the
** string pointed to by s.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char*)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
