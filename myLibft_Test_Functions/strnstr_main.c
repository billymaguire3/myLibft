/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:20:01 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 15:31:52 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char largestring[20] = "lets go redwings";
	char smallstring[10] = "go";

	printf("CPU's strnstr: %s\n\n", strnstr(largestring, smallstring, 7));
	printf("My ft_strnstr: %s\n\n", ft_strnstr(largestring, smallstring, 7));
	return (0);
}
