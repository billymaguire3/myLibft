/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:18:22 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 19:49:17 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	printf("Mine: %s\n", ft_memcpy("     ", NULL, 17));
	printf("CPU : %s\n", memcpy("      ", NULL, 17));
	return (0);
}
/*
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
*/
/*
int		main(void)
{
	char dst[10] = '\0';
	char src[10] = '\0';

	char testdst[10] = '\0';
	char testsrc[10] = '\0';

	memcpy(dst, src, 4);
	printf("CPU's memcpy:\n""%s\n", dst);

	ft_memcpy(testdst, testsrc, 4);
	printf("My memcpy:\n""%s\n", testdst);
	return (0);
}
*/
