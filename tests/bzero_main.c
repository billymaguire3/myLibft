/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:38:18 by wimaguir          #+#    #+#             */
/*   Updated: 2019/12/04 13:10:45 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char str[10] = "william";

	bzero(str + 4, 4);
	printf("CPU's bzero:\n""%s\n", str);

	ft_bzero(str + 4, 4);
	printf("My bzero:\n""%s\n", str);

	return (0);
}
