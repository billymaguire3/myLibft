/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:03:16 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/27 18:11:34 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *fresh;
	int i;

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

#include <stdio.h> //printf

void	print(char *fresh, const char *str)
{
	int i = 0;
	(void)str;
	printf("%c\n", fresh[i]);
}

int		main(void)
{
	ft_strmap("this is a string", print);
	return (0);
}
