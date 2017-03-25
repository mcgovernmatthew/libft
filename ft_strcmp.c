/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 14:14:47 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/26 15:07:27 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *s1c;
	unsigned char *s2c;

	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (*s1c || *s2c)
	{
		if (*s1c != *s2c)
			return (*s1c - *s2c);
		s1c++;
		s2c++;
	}
	return (0);
}
