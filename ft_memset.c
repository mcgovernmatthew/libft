/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 21:54:24 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/26 21:54:27 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;

	d = ((unsigned char *)b);
	while (len > 0)
	{
		*d = c;
		d++;
		len--;
	}
	return (b);
}
