/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:09:49 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 16:53:11 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h> //printf

char	ascii_plus_five(unsigned int i, char s)
{
	(void)i;
	s += 5;
	return (s);
}

int		main(void)
{
	char *str = "billy";
	char *fresh = ft_strmapi(str, ascii_plus_five);
	printf("%s\n", fresh);
	return (0);
}
