/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 15:39:15 by mmcgover          #+#    #+#             */
/*   Updated: 2016/10/01 15:39:16 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	char	*str2;
	int		n;
	int		i;

	n = ft_strlen(str);
	i = -1;
	while (str[n - 1] == ' ' || str[n - 1] == '\t' || str[n - 1] == '\n')
		n--;
	while (str[++i] == ' ' || str[i] == '\t' || str[i] == '\n')
		n--;
	if (n <= 0)
		n = 0;
	str2 = (char *)malloc(sizeof(char) * (n + 1));
	if (str2 == NULL)
		return (NULL);
	str = str + i;
	i = -1;
	while (++i < n)
		str2[i] = *str++;
	str2[i] = '\0';
	return (str2);
}
