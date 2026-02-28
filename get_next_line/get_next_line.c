/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:07:25 by tkono             #+#    #+#             */
/*   Updated: 2026/02/27 03:05:32 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_and_join(int fd, char *save)
{
	char	*buf;
	int		rd;

	rd = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		rd = -1;
	while (rd > 0 && !ft_strchr(save, '\n'))
	{
		rd = read(fd, buf, BUFFER_SIZE);
		if (rd > 0)
		{
			buf[rd] = '\0';
			save = ft_strjoin(save, buf);
			if (!save)
				rd = -1;
		}
	}
	free(buf);
	if (rd == -1)
	{
		free(save);
		return (NULL);
	}
	return (save);
}

static char	*extract_line(char *save)
{
	int		i;
	char	*line;

	i = 0;
	if (!save || !save[0])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		i++;
	line = ft_substr(save, 0, i);
	return (line);
}

static char	*clean_save(char *save)
{
	int		i;
	char	*new_save;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	new_save = ft_substr(save, i + 1, ft_strlen(save) - i);
	free(save);
	return (new_save);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	save = read_and_join(fd, save);
	if (!save)
		return (NULL);
	line = extract_line(save);
	if (!line)
	{
		free(save);
		save = NULL;
		return (NULL);
	}
	save = clean_save(save);
	if (!save && ft_strchr(line, '\n'))
	{
		free(line);
		return (NULL);
	}
	return (line);
}
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	char	*str;
	int		fd;

	fd = open("1.txt",O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
	while (str)
	{
		free(str);
		str = get_next_line(fd);
		printf("%s", str);
	}
	free(str);
}
