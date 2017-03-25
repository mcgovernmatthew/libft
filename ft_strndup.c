/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 01:39:45 by mmcgover          #+#    #+#             */
/*   Updated: 2016/11/26 01:39:47 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*output;

	i = 0;
	output = (char *)malloc((n + 1) * sizeof(char));
	if (!output)
		return (NULL);
	while (s1[i] && i < n)
	{
		output[i] = s1[i];
		i++;
	}
	while (i <= n)
		output[i++] = '\0';
	return (output);
}
