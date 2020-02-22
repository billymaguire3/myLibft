/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:35:39 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/21 17:51:47 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Use ft_bzero to set every character of the string to the value ’\0’.
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, ft_strlen(s));
}
