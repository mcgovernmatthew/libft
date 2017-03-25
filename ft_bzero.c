/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 21:57:27 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/26 21:57:30 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*d;
	int				c;

	c = 0;
	d = ((unsigned char *)b);
	while (len > 0)
	{
		*d = c;
		d++;
		len--;
	}
	return (b);
}
