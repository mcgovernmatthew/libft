/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 19:01:29 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/28 19:01:31 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *ltl, size_t len)
{
	int		i;
	size_t	l;

	i = 0;
	if (!*big)
		return (NULL);
	if ((l = ft_strlen(ltl)) == 0)
		return (char *)(big);
	while (i <= (int)(len - l) && *big)
	{
		if ((*big == *ltl) && !(ft_strncmp(big, ltl, l)))
			return (char *)(big);
		big++;
		i++;
	}
	return (NULL);
}
