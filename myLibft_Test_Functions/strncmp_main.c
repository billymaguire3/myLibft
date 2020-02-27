/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:04:49 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 13:29:12 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
/*
int		main(void)
{
	char s1[] = "billy";
	char s2[] = "bills";

	char test1[] = "billy";
	char test2[] = "bills";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", strncmp(test1, test2, 4));
	return (0);
}
*/

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("CPU's strncmp:%d\n", strncmp(argv[1], argv[2], ft_atoi(argv[3])));
		printf("MY ft_strncmp:%d\n", ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	}
	return (0);
}
