/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:36:18 by wimaguir          #+#    #+#             */
/*   Updated: 2019/09/13 15:34:03 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char str[50] = "william maguire";

	printf("before memset: %s\n", str);

	memset(str + 8, '.', 6*sizeof(char));

	printf("after memset: %s\n", str);
	return (0);
}
