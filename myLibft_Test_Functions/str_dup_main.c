/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_dup_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:59:47 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/09 13:43:49 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char src[] = "billyyyy";
	char *dest;
	char *test;

	dest = ft_strdup(src);
	printf("%s\n", dest);
	test = strdup(src);
	printf("%s\n", test);
	return (0);
}
