/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 22:38:00 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/26 22:38:05 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1c;
	unsigned char *s2c;

	s1c = (unsigned char*)s1;
	s2c = (unsigned char*)s2;
	while (n > 0 && *s1c == *s2c)
	{
		n--;
		s1c++;
		s2c++;
	}
	if (n == 0)
		return (0);
	else
		return (*s1c - *s2c);
}
