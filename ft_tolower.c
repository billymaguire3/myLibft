/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:04:57 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/30 16:26:26 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  ft_tolower converts an upper-case letter to the corresponding
** lower-case letter.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	else
		return (c);
}
