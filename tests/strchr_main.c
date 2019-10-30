/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:00:02 by wimaguir          #+#    #+#             */
/*   Updated: 2019/10/28 17:15:17 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char str[10] = "billy";

	printf("the output for CPU's strchr is: ""%s\n", strchr(str, 'l'));
	printf("the output for MY ft_strchr is: ""%s\n", ft_strchr(str, 'l'));
	return (0);
}
