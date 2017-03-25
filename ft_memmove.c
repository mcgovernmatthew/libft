/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:53:39 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/28 10:53:42 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char*)dst;
	s = (const char*)src;
	if (d <= s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		s += len;
		d += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
