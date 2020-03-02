/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 12:32:46 by wimaguir          #+#    #+#             */
/*   Updated: 2020/03/02 12:08:53 by wimaguir         ###   ########.fr       */
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
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(size + 1));
	if (!str)
		return (NULL);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
