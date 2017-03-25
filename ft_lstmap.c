/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 17:33:09 by mmcgover          #+#    #+#             */
/*   Updated: 2016/10/06 18:48:21 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list *lst2;
	t_list *head;

	if (!lst)
		return (NULL);
	if (!(head = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	head = f(lst);
	lst2 = head;
	while (lst->next)
	{
		lst2->next = f(lst->next);
		lst2 = lst2->next;
		lst = lst->next;
	}
	return (head);
}
