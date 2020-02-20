/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:05:16 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/20 14:06:40 by wimaguir         ###   ########.fr       */
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
	ft_striter("billy", vert_print);
	return (0);
}
