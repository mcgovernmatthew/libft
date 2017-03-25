/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:03:10 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/29 14:03:14 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = NULL;
	if (size)
	{
		fresh = malloc(size);
		if (fresh)
			ft_bzero(fresh, size);
	}
	return (fresh);
}
