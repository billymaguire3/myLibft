/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:46:49 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 14:30:26 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main()
{
	char src[10] = "Maguire";
	char dest[15] = "Billy";
	char dest2[15] = "Billy";

	printf("this is what strlcat returns: %lu\n", strlcat(dest, src, 10));
	printf("this is what my ft_strlcat returns: %lu\n", ft_strlcat(dest2, src, 10));

	return (0);
}
