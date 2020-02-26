/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:40:26 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 18:55:05 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
#include <stdio.h>
/*

int		main(void)
{
	char testdst[40];
	char testsrc[40] = "Copy this string to testdst";
	char dst[40];
	char src[40] = "Copy this string to testdst";

	printf("CPU's memccpy: %s\n\n", memccpy(testdst, testsrc, 'p', sizeof (testdst)));
	printf("MY ft_memccpy: %s\n\n", ft_memccpy(dst, src, 'p', sizeof (dst)));
	return (0);
}
*/

int		main(void)
{
	char	buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char	buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char	*src = "string with\tinside!";

	printf("CPU's memmcpy:\n%s\n", memccpy(buff1, src, '\t', 21));
	printf("My ft_memccpy:\n%s\n", ft_memccpy(buff2, src, '\t', 21));
	return (0);
}
