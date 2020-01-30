/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:36:09 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/29 18:16:20 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int len;
	int i;

	i = 0;
	len = ft_strlen(s1);
	fresh = (char *)malloc());
	if (s1 && s2)
	{
		while (s1[i] && s2[i])
		{
			fresh[j] = ft_strcat(s1[i], s2[i]);
			i++;
			j++;
		}
		fresh[j] = '\0';
		return (fresh);
	}
	return (NULL);
}

#include <stdio.h>

int		main(void)
{
	char *prefix = "Look it ";
	char *suffix = "Works!!";

	printf("%s\n\n%s\n\n%s\n\n", prefix, suffix, ft_strjoin(prefix, suffix));
	return (0);
}
