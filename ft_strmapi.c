/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:29:08 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/27 11:55:02 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument by
** giving its index as first argument to create a “fresh” new string
** (with malloc) resulting from the successive applications of f.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		if (!(fresh = (char *)malloc(ft_strlen(s) + 1)))
			return (NULL);
		while (s[i])
		{
			fresh[i] = f(i, s[i]);
			i++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
