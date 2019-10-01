/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:58:38 by wimaguir          #+#    #+#             */
/*   Updated: 2019/09/10 16:32:44 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	size_t dlen;
	
	i = 0;
	dlen = (ft_strlen(dst));
	while (src[i] != '\0' && src[i] < dstsize - dlen - 1)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (i + dlen);
}

int		main(void)
{
	char src[20]  = " Maguire";
	char dest[20]  = "Billy";
	char testsrc[20] = " Maguire";
	char testdest[20]  = "Billy";

	ft_strlcat(dest, src, 5);
	printf("%s\n", dest);

	strlcat(testdest, testsrc, 5);
	printf("%s\n", testdest);

	return (0);
}
