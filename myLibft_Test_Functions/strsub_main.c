/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:01:08 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 17:01:32 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h> // printf

int		main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s\n", ft_strsub(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
	return (0);
}
