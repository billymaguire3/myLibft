/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:06:32 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/14 15:09:27 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = (n * -1);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_puchar_fd((n % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
