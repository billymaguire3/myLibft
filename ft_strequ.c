/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:30:56 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/18 15:51:32 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2. If the 2 strings are
** identical the function returns 1, or 0 otherwise.
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		if (!ft_strcmp(s1, s2))
			return (1);
	}
	return (0);
}
