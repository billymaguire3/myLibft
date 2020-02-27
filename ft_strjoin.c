/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:36:09 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 17:11:20 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		i;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1) + ft_strlen(s2));
	if (!fresh)
		return (NULL);
	if (s1 != NULL && s2 != NULL)
	{
		while (*s1 != '\0')
			ft_strcpy(&fresh[i++], ((char *)s1++));
		while (*s2 != '\0')
			ft_strcpy(&fresh[i++], ((char *)s2++));
		fresh[i] = '\0';
		return (fresh);
	}
	else
		return (NULL);
}
