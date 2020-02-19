/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:24:12 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/18 17:24:41 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
