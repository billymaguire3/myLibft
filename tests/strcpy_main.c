/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:28:06 by wimaguir          #+#    #+#             */
/*   Updated: 2019/08/01 14:19:57 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char dest[] = "billyyyyyyyyyyyyyyy";
	char src[] = "redwings";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
