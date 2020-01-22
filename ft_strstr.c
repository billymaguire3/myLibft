/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:16:39 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/21 15:29:49 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	size_t len;

	len = ft_strlen(needle);
	while (*haystack)
	{
		if (!ft_memcmp((char *)haystack, (char *)needle, len))
			return (haystack);
		haystack++;
	}
	return (0);
}
