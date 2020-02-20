/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:06:32 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/20 13:07:42 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nbr;

	nbr = (long)n;
	//if (n == -2147483648)
	//	ft_putstr_fd("-2147483648", fd);
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (nbr * -1);
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd(nbr + '0', fd);
	}
}
