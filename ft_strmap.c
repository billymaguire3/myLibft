/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:03:16 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/29 17:16:32 by wimaguir         ###   ########.fr       */
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
	char	*fresh;
	int		i;

	i = 0;
	fresh = (char *)malloc(ft_strlen(s) + 1);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			fresh[i] = f(s[i]);
			i++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
