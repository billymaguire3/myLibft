/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnequ_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 15:44:10 by wimaguir          #+#    #+#             */
/*   Updated: 2020/01/28 15:44:27 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h> // printf

int		main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d\n", ft_strnequ(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}
