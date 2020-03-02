/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:03:16 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/27 11:54:55 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string given as argument to
** create a “fresh” new string (with malloc) resulting from the successive
** applications of f.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			fresh[i] = (f)(s[i]);
			i++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
