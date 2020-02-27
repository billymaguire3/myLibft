/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:52:50 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 18:26:07 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char *str =  "*hello*fellow***students*";
	char **split_str;

	split_str = ft_strsplit(str, '*');

	if (split_str)
	{
		int i;
		i = 0;
		while (*(split_str + i))
		{
			printf("%s, ", *(split_str + i));
			i++;
		}
		printf("\n");
	}
	return (0);
}
