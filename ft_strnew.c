/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 12:32:46 by wimaguir          #+#    #+#             */
/*   Updated: 2020/03/02 16:05:37 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a “fresh” string ending with ’\0’. Each
** character of the string is initialized at '\0'. If the allocation fails the
** function returns NULL.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*fresh;

	i = 0;
	if (!(fresh = ft_memalloc(size + 1)))
		return (NULL);
	while (i < size)
	{
		fresh[i] = '\0';
		i++;
	}
	return (fresh);
}
