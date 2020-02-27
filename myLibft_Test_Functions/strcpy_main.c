/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:28:06 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 14:28:00 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char dest[] = "billyyyyyyyyyyyyyyy";
	char src[] = "redwings";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
