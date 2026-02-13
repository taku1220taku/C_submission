/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:07:25 by tkono             #+#    #+#             */
/*   Updated: 2026/02/13 16:01:54 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_and_join(int fd, char *save)
{
	char	*buffer;
	char	*temp;
	int		bytes_read;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(save, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			free(save);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		temp = save;
		save = ft_strjoin(save, buffer);
		free(temp);
	}
	free(buffer);
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
	// 改行まで進める
	while (save[i] && save[i] != '\n')
		i++;
	// 改行がない（＝ファイルの末尾まで処理しきった）場合
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	// 改行の次の文字から確保
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
	save = clean_save(save);
	return (line);
}

// int main(int argc, char **argv)
// {
//     int     fd;
//     char    *line;
//     int     i;

//     i = 1;
//     while (i < argc)
//     {
//         printf("\n--- Reading file: %s ---\n", argv[i]);
//         fd = open(argv[i], O_RDONLY);

//         if (fd == -1)
//         {
//             perror("Error opening file"); // ファイルが開けない場合のエラー表示
//         }
//         else
//         {
//             // GNL呼び出しループ
//             while ((line = get_next_line(fd)) != NULL)
//             {
//                 printf("%s", line); // GNLは改行を含んで返すので、ここで\nは不要
//                 free(line);         // ★必ずfreeすること
//             }
//             close(fd);
//         }
//         i++;
//     }
//     return (0);
// }
