/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:58:38 by wimaguir          #+#    #+#             */
/*   Updated: 2019/10/10 16:15:56 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_strcat.c"
#include "./ft_putchar.c"
#include "libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i;
    char *fullname;
    int len;

    len = ft_strlen(dst);
    while (len == 0) {
        ft_putchar(*src);
        break ;
    }
    i = 0;
    fullname = ft_strcat(dst, src);
    while (i < dstsize)
    {
        if (i == dstsize - 1)
        {
            fullname[i] = '\0';
        }
        i++;
    }
    dst = fullname;
    return *dst;
}

int		main()
{
	char src[20]  = "Maguire";
	char dest[10] = "";

	ft_strlcat(dest, src, 10);
	printf("Mine: %s\n", dest);

	strlcat(dest, src, 10);
	printf("CPU: %s\n", dest);

	return (0);
}
