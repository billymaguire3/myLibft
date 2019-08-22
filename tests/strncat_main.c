/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:27:39 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/21 13:36:51 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char src[]  = " Maguire";
	char dest[20]  = "Billy";
	char testsrc[] = " Maguire";
	char testdest[20]  = "Billy";

	ft_strncat(dest, src, 5);
	printf("%s\n", dest);

	strncat(testdest, testsrc, 5);
	printf("%s\n", testdest);

	return (0);
}
