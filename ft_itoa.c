/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:35:38 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 18:54:10 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate with (malloc) and return a "fresh" string ending with '\0'
** representing the integer n given as argument. Supports negative numbers.
*/

#include "libft.h"

static int		int_len(long nbr)
{
	int len;

	len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	long	nbr;
	int		i;
	char	*fresh;

	nbr = (long)n;
	i = int_len(nbr);
	if (!(fresh = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	fresh[i--] = '\0';
	if (nbr == 0)
		return (ft_strdup("0"));
	if (nbr < 0)
	{
		fresh[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		fresh[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	return (fresh);
}
