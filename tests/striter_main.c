/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:05:16 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/27 15:56:23 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdio.h> //printf

void	vert_print(char *str)
{
	int i = 0;
	printf("%c\n", str[i]);
}

int		main(void)
{
	ft_striter("", vert_print);
	return (0);
}
