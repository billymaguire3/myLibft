/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:34:37 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 16:19:09 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdio.h> //printf

void	vert_print(unsigned int i, char *str)
{
	printf("%c\n", str[i]);
}

int		main(void)
{
	ft_striteri("this is a string", vert_print);
	return (0);
}
