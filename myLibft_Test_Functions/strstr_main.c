/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 20:00:31 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 15:32:15 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char largestring[20] = "maguire";
	char smallstring[10] = "ag";

	printf("CPU's strstr: %s\n\n", strstr(largestring, smallstring));
	printf("My ft_strstr: %s\n\n", ft_strstr(largestring, smallstring));
	return (0);
}
