/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:15:31 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 15:17:36 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char str[20] = "cheddarcheese";

	printf("the output for CPU's strrchr is: ""%s\n", strrchr(str, 'h'));
	printf("the output for MY ft_strchr is: ""%s\n", ft_strrchr(str, 'h'));
	return (0);
}
