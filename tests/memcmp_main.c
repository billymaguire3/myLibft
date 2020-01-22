/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:59:47 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/21 12:08:18 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(int argc, char**argv)
{
	if (argc == 4)
	{
		printf("CPU's memcmp: %d\n\n", memcmp(argv[1], argv[2], atoi(argv[3])));
		printf("MY ft_memcmp: %d\n\n", memcmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}

/*
int		main(void)
{
	char s1[10] = "billy";
	char s2[10] = "bills";

	printf("CPU's memcmp: %d\n\n", memcmp(s1, s2, 5));
	return (0);
}
*/
