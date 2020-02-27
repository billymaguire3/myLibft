/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:04:34 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 17:49:47 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char array[15];
	char testarray[15];

	printf("%s\n", ft_strncpy(array, "", 12));
	printf("%s\n", strncpy(testarray, "", 12));
	return (0);
}
