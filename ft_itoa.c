/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 16:41:40 by mmcgover          #+#    #+#             */
/*   Updated: 2016/10/03 16:41:42 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int			nlen;
	int			sign;
	char		*str;

	nlen = ft_nlen(n);
	sign = ft_sign(n);
	if (!(str = (char *)malloc(sizeof(char) * (nlen + sign + 1))))
		return (NULL);
	if (str)
	{
		str = str + nlen + sign;
		*str = '\0';
		if (n < 0)
			n = -n;
		if (n == 0)
			*--str = '0';
		while (n != 0)
		{
			*--str = ft_isneg(n % 10) + '0';
			n = n / 10;
		}
		if (sign)
			*--str = '-';
	}
	return (str);
}
