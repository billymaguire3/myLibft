/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:59:47 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/20 13:46:54 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char *src = "This is a DUPLICATED string";
	char *dest;
	char *test;

	test = strdup(src);
	printf("CPU's strdup: %s\n", test);
	dest = ft_strdup(src);
	printf("MY ft_strdup: %s\n", dest);
	return (0);
}
