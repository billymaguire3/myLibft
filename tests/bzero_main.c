/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:38:18 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/21 18:09:45 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h> // printf

int		main(void)
{
	char str[10] = "william";

	bzero(str + 4, 4);
	printf("CPU's bzero:\n""%s\n", str);

	ft_bzero(str + 4, 4);
	printf("My bzero:\n""%s\n", str);

	return (0);
}
