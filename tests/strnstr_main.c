/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:20:01 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/21 16:22:27 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char largestring[20] = "lets go redwings";
	char smallstring[10] = "gs";

	printf("CPU's strnstr: %s\n\n", strnstr(largestring, smallstring, 16));
	printf("My ft_strnstr: %s\n\n", ft_strnstr(largestring, smallstring, 16));
	return (0);
}
