/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:08:08 by wimaguir          #+#    #+#             */
/*   Updated: 2019/12/05 18:16:56 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	const char *str = "maguire";
	const char ch = 'b';

	printf("str before memchr: %s\n\n", str);
	printf("CPU's remaining str after '%c': %s\n\n", ch, memchr(str, ch, ft_strlen(str)));
	printf("MY remaining str after '%c': %s\n", ch, ft_memchr(str, ch, ft_strlen(str)));
	return (0);
}
