/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 13:52:43 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 17:19:27 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdio.h>

int		main(void)
{
	char *prefix = "Look it ";
	char *suffix = "Works!!!!!!!!";

	printf("s1 before ft_strjoin: %s\n", prefix);
	printf("s2 before ft_strjoin: %s\n", suffix);
	printf("s1 & s2 after FT_STRJOIN: %s\n", ft_strjoin(prefix, suffix));
	return (0);
}
