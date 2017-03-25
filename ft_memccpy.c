/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 17:59:58 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/27 18:00:00 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	b;
	unsigned int	i;

	b = (unsigned char)c;
	d = (unsigned char*)dst;
	i = 0;
	s = (unsigned char *)src;
	if (dst && src)
	{
		while (i < n)
		{
			*d = *s;
			if (*s == b)
				return ((void *)(d + 1));
			d++;
			s++;
			i++;
		}
	}
	return (0);
}
