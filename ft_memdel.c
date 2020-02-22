/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 12:24:01 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/20 17:37:27 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a memory area that needs to be freed with
** free, then puts the pointer to NULL.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = (NULL);
	}
}
