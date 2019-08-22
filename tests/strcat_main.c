/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:25:07 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/13 12:41:34 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char src[] = "Works!!";
	char dest[50] = "Look it ";
	char testsrc[] = "Works!!";
	char testdest[50] = "Look it ";

	strcat(dest, src);
	printf("%s\n", dest);
	ft_strcat(testdest, testsrc);
	printf("%s\n", dest);
	return (0);
}
