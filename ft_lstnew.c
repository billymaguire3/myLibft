/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:24:12 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/21 17:06:03 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *fresh;

	fresh = malloc(sizeof(t_list));
	if (!fresh)
		return (NULL);
	if (!content)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
	}
	else
	{
		fresh->content = malloc(content_size);
		if (!(fresh->content))
			return (NULL);
		ft_memmove(fresh->content, content, content_size);
		fresh->content_size = content_size;
	}
	fresh->next = NULL;
	return (fresh);
	free(fresh);
}
