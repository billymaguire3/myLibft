/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:00:02 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 15:18:44 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char str[14] = "cheddarcheese";

	printf("the output for CPU's strchr is: ""%s\n", strchr(str, 'h'));
	printf("the output for MY ft_strchr is: ""%s\n", ft_strchr(str, 'h'));
	return (0);
}
