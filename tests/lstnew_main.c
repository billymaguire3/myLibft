/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:54:03 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/21 12:51:08 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	t_list *temp;
	size_t size = 14;

	temp = ft_lstnew("This is a fresh link", size);
	printf("%s\n", temp->content);
	printf("%p\n", temp->next);
}
