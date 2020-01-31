/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:48:50 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 15:41:50 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strncpy copies at most len characters from src into dst.
** If src is less than len characters long, the remainder of dst is filled with
** `\0' characters.  Otherwise, dst is not terminated.
*/

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int len)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
