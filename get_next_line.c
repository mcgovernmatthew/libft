/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcgover <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 20:21:26 by mmcgover          #+#    #+#             */
/*   Updated: 2017/01/14 19:18:31 by mmcgover         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static int			handle_static(const int fd, char *buff, char *holder[fd])
{
	int			counter;
	char		*str;

	while (ft_strchr(buff, '\n') == NULL &&
		(counter = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[counter] = '\0';
		str = holder[fd];
		holder[fd] = ft_strjoin(str, buff);
		ft_strdel(&str);
	}
	ft_strdel(&buff);
	if (counter == -1)
		return (-1);
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	char			*buff;
	char			*next_line;
	char			*temp;
	static	char	*h[2147483647];
	int				r;

	buff = ft_strnew(BUFF_SIZE);
	if (fd < 0 || line == NULL || buff == NULL || BUFF_SIZE <= 0)
		return (-1);
	if (h[fd] == NULL)
		h[fd] = ft_strnew(1);
	if ((r = handle_static(fd, buff, h)) == -1)
		return (-1);
	if ((next_line = ft_strchr(h[fd], '\n')) != NULL)
	{
		temp = ft_strdup(next_line + 1);
		*line = ft_strndup(h[fd], ft_strlen(h[fd]) - ft_strlen(next_line));
		ft_strdel(&h[fd]);
		h[fd] = ft_strdup(temp);
		ft_strdel(&temp);
		return (1);
	}
	*line = ft_strdup(h[fd]);
	h[fd] = NULL;
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
