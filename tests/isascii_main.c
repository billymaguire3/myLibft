/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 16:03:52 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/21 18:34:33 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	int test;
	int c;

	test = 'L';
	c = 'L';
	isascii(test);
	printf("Computer's: ""%d\n", test);
	ft_isascii(c);
	printf("Mine: ""%d\n", c);
	return (0);
}


