/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:18:22 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/21 19:15:09 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *a;
	char *b;

	a = argv[1];
	b = argv[2];
	if (argc == 4)
	{
		ft_memcpy(argv[1], argv[2], atoi(argv[3]));
		memcpy(a, b, atoi(argv[3]));
		printf("mine: %s\n", argv[1]);
		printf("systems: %s\n", a);
	}
	return (0);
}

/*
	char dst[20];
	char src[20] = "maguire";

	char testdst[20];
	char testsrc[20] = "maguire";

	memcpy(dst, src, 4);
	printf("CPU's memcpy:\n""%s\n", dst);

	ft_memcpy(testdst, testsrc, 4);
	printf("My memcpy:\n""%s\n", testdst);
*/

