/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:15:31 by wimaguir          #+#    #+#             */
/*   Updated: 2019/10/30 13:56:27 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char str[10] = "billy";

	printf("the output for CPU's strchr is: ""%s\n", strchr(str, 'y'));
	printf("the output for MY ft_strchr is: ""%s\n", ft_strchr(str, 'y'));
	return (0);
}
