/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 14:25:44 by mmcgover          #+#    #+#             */
/*   Updated: 2016/10/06 14:25:46 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	if ((link = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	link->next = NULL;
	if (content != NULL && content_size != 0)
	{
		if ((link->content = malloc(content_size)) == NULL)
			return (NULL);
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	else
	{
		link->content = NULL;
		link->content_size = 0;
	}
	return (link);
}
