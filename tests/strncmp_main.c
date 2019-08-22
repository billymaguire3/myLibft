/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:04:49 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/02 11:23:38 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char s1[] = "billy";
	char s2[] = "bills";

	char test1[] = "billy";
	char test2[] = "bills";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", strncmp(test1, test2, 4));
	return (0);
}
