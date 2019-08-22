/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:11:27 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/22 14:30:08 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	int test1;
	int test2;
	int test3;
	int test4;
	int test5;


	test1 = ' ';
	test2 = 'C';
	test3 = '~';
	test4 = 31;
	test5 = 127;

	printf("Computer's: ""%d\n""Mine: ""%d\n", isprint(test1), ft_isprint(test1));
	printf("Computer's: ""%d\n""Mine: ""%d\n", isprint(test2), ft_isprint(test2));
	printf("Computer's: ""%d\n""Mine: ""%d\n", isprint(test3), ft_isprint(test3));
	printf("Computer's: ""%d\n""Mine: ""%d\n", isprint(test4), ft_isprint(test4));
	printf("Computer's: ""%d\n""Mine: ""%d\n", isprint(test5), ft_isprint(test5));
	return (0);
}
