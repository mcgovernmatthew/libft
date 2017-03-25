/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 21:44:28 by mmcgover          #+#    #+#             */
/*   Updated: 2016/09/29 21:44:29 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = -1;
	str = ft_strdup(s);
	if (!s || !f || !str)
		return (NULL);
	while (str && str[++i])
		str[i] = f(str[i]);
	str[i] = '\0';
	return (str);
}
