/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:31:41 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/01 15:06:54 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char s1[] = "billy";
	char s2[] = "balls";

	char test1[] = "billy";
	char test2[] = "balls";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(test1, test2));
	return (0);
}
