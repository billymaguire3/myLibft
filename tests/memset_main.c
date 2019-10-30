/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:36:18 by wimaguir          #+#    #+#             */
/*   Updated: 2019/10/30 13:40:25 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char str[50] = "william maguire";

	memset(str + 8, '.', 6*sizeof(char));
	printf("Computer's memset:\n""%s\n", str);

    ft_memset(str + 8, '.', 6*sizeof(char));
    printf("My memset:\n""%s\n", str);
	return (0);
}
