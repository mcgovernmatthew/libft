/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 15:06:55 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/26 15:07:01 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s2;

	s2 = s + ft_strlen(s);
	while (s2 >= s)
	{
		if (*s2 == (char)(c))
			return ((char *)(s2));
		s2--;
	}
	return (NULL);
}
