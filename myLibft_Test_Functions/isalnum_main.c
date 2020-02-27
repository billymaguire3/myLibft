/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:38:31 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/22 14:05:47 by wimaguir         ###   ########.fr       */
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

	test1 = '9';
	test2 = 'T';
	test3 = '(';
	test4 = '?';
	test5 = '[';
	
	printf("Computers: ""%d\n""Mine: ""%d\n", isalnum(test1), ft_isalnum(test1));
	printf("Computers: ""%d\n""Mine: ""%d\n", isalnum(test2), ft_isalnum(test2));
	printf("Computers: ""%d\n""Mine: ""%d\n", isalnum(test3), ft_isalnum(test3));
	printf("Computers: ""%d\n""Mine: ""%d\n", isalnum(test4), ft_isalnum(test4));
	printf("Computers: ""%d\n""Mine: ""%d\n", isalnum(test5), ft_isalnum(test5));
	return (0);
}
