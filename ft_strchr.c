/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 15:47:49 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/26 15:08:16 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return ((char *)s);
	while (s[0] != '\0')
	{
		if (s[0] == (char)c)
			return ((char*)s);
		s++;
	}
	if (s[0] != (char)c)
		return (NULL);
	return ((char *)s);
}
