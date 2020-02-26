/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:25:29 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 20:15:40 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char *str = "        ";

	printf("str BEFORE trim = %s\n\n", str);
	printf("str AFTER trim = %s\n", ft_strtrim(str));
	return (0);
}
