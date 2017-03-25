/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordbuilder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 09:59:15 by mmcgover          #+#    #+#             */
/*   Updated: 2016/10/08 09:59:16 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wordbuilder(char const *str, char c, unsigned int *in)
{
	unsigned	i;
	unsigned	start;
	unsigned	end;
	char		*word;

	i = *in;
	while (str[i] == c)
		i++;
	start = i;
	while (str[i] != c && str[i] != '\0')
		i++;
	end = i;
	*in = i;
	word = ft_strnew(end - start);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}
