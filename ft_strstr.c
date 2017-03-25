/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 17:22:03 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/28 17:22:05 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	const char	*bc;
	const char	*lc;

	bc = big;
	if (big == little)
		return ((char *)big);
	while (*big)
	{
		lc = little;
		while (*lc != '\0' && (*bc == *lc))
		{
			++bc;
			++lc;
		}
		if (*lc == '\0')
			return ((char *)big);
		++big;
		bc = big;
	}
	return (NULL);
}
