/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:32:35 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/06 15:22:29 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns an array of “fresh” strings 
** (all ending with '\0', including the array itself) obtained by spliting
** using the character c as a delimiter. If the allocation fails the function
** returns NULL.
*/

char	**ft_strsplit(char const *s, char c)
{

#include "libft.h"

int		main(void)
{
	char *str = "*hello*fellow***students*";

	printf("String BEFORE ft_strsplit:\n%s\n\n", str);
//	printf("String AFTER  ft_strsplit:\n%s\n", ft_strsplit(str, '*'));
	return (0);
}
