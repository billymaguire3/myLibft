/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:06:12 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 16:49:33 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdio.h> //printf

char	func(char s)
{
	s += 5;
	return (s);
}

int		main(void)
{
	char *str = "abc";
	char *fresh = ft_strmap(str, func);
	printf("%s\n", fresh);
	return (0);
}
