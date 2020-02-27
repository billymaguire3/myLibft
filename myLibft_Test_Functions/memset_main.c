/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:36:18 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/21 18:56:37 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char str[50] = "william maguire";

	memset(str + 8, '.', 6*sizeof(char));
	printf("Computer's memset:\n""%s\n", str);

    ft_memset(str + 8, '.', 6*sizeof(char));
    printf("My memset:\n""%s\n", str);
	return (0);
}
