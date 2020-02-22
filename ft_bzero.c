/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:19:27 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/21 18:15:10 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_bzero writes n zeroed bytes to the string s(using ft_memset).  If n is
** zero, ft_bzero
** does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
