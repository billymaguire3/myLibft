/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:40:26 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/08 15:40:56 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char testdst[40];
	char testsrc[40] = "Copy this string to testdst";
	char dst[40];
	char src[40] = "Copy this string to testdst";

	memccpy(testdst, testsrc, 's', sizeof (testdst));
	printf("CPU's memccpy: %s\n\n", testdst);
	ft_memccpy(dst, src, 's', sizeof (testdst));
	printf("MY ft_memccpy: %s\n\n", testdst);
	return (0);
}
