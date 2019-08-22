/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:04:34 by wimaguir          #+#    #+#             */
/*   Updated: 2019/07/31 14:17:51 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char array[14];
	char test[10];

	printf("%s\n", ft_strncpy(array, "avbbvvvvvvvfffff", 12));
	printf("%s\n", strncpy(test, "billy loves hockey", 2));
	return (0);
}

