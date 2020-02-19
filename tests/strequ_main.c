/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequ_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 15:13:03 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/18 15:49:02 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h> // printf

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_strequ(argv[1], argv[2]));
	return (0);
}
