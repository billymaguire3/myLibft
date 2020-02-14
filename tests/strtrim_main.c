/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:25:29 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/06 13:34:44 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char *str = "\n\n\nbilly  ";

	printf("str BEFORE trim = %s\n\n", str);
	printf("str AFTER trim = %s\n", ft_strtrim(str));
	return (0);
}
