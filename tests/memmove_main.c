/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:53:13 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/20 16:40:17 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *testdst;
	char *testsrc;

	testdst = argv[1];
	testsrc = argv[2];
	if (argc == 4)
	{
		ft_memmove(argv[1], argv[2], atoi(argv[3]));
		memmove(testdst, testsrc, atoi(argv[3]));
		printf("Mine: %s\n", argv[1]);
		printf("CPU's: %s\n", argv[1]);
	}
	return (0);
}
