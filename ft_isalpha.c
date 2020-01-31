/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 12:13:07 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 16:16:41 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests for any character for which isupper or islower is true.  The value
** of the argument must be representable as an unsigned char or
** the value of EOF. The return value is zero if the character tests false
** and non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
