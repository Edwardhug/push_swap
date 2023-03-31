/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:00:30 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/31 13:42:06 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	static char	*buff[65534];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buff[fd])
	{
		buff[fd] = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buff[fd])
			return (NULL);
		buff[fd][0] = 0;
	}
	line = ft_fill_line(fd, buff[fd]);
	if (have_error_gnl(line, &buff[fd]))
		return (NULL);
	ft_clear_buff(buff[fd]);
	return (line);
}

char	*ft_fill_line(int fd, char *buff)
{
	int		size_readed;
	char	*str;

	size_readed = 1;
	str = NULL;
	while (size_readed > 0)
	{
		str = ft_strjoin_gnl(str, buff);
		if (!str)
			return (NULL);
		if (have_newline(buff))
			break ;
		size_readed = read(fd, buff, BUFFER_SIZE);
		if (size_readed == -1)
		{
			buff[0] = 0;
			free(str);
			return (NULL);
		}
		buff[size_readed] = 0;
	}
	return (str);
}

void	ft_clear_buff(char *buff)
{
	int	i;
	int	j;

	if (!have_newline(buff))
		return ;
	i = 0;
	j = 0;
	while (buff[i] != '\n')
		i++;
	i++;
	while (buff[i])
		buff[j++] = buff[i++];
	buff[j] = 0;
}
