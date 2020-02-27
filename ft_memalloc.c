/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:38:37 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 16:07:18 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a “fresh” memory area. The memory
** allocated is initialized to 0. If the allocation fails, the function
** returns NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *fresh;

	fresh = (void *)malloc(size);
	if (!fresh)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
