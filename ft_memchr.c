/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 15:27:52 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/23 15:27:53 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	d;

	d = c;
	str = (unsigned char*)s;
	while (n-- != 0)
	{
		if (*str == d)
			return ((unsigned char *)str);
		str++;
	}
	return (NULL);
}
