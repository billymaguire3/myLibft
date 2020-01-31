/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:24:27 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 16:24:08 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isprint() function tests for any printing character, including space
** (` ').  The value of the argument must be representable as an unsigned char
** or the value of EOF. Returns zero if the character tests false and returns
** non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
