/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:47:31 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/19 12:16:28 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define MAX 2048

// char	*get_single_digits(char *path)
// {
// 	int		file_desc;
// 	int		bytes;
// 	char	c;
// 	int		i;
// 	char	**result;
// 	int		line_index;

// 	file_desc = open(path, O_RDONLY);
// 	if (file_desc == -1)
// 		return (0);
// 	result = malloc(sizeof(char) * 10 + 1);
// 	while (i < 10)
// 		result[i++] = malloc(sizeof(char) + 1);
// 	i = 0;
// 	line_index = 0;
// 	while ((bytes = read(file_desc, &c, sizeof(c))) > 0)
// 	{
// 		if (c == i + '0' && !(*(&c + 1) >= '0' && *(&c + 1) <= '9'))
// 			write(1, (&c + 1), 5);
// 		if (c == '\n')
// 			line_index++;
// 	}
// 	return (0);
// }

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// char	*get_single_digits(char *path, char ***dictionary)
// {
// 	int		file_desc;
// 	int		size;
// 	char	buffer[MAX];
// 	int		buf_char_index;
// 	int		dict_values_index;
// 	int		line;

// 	file_desc = open(path, O_RDONLY);
// 	if (file_desc == -1)
// 		return (0);
// 	size = read(file_desc, buffer, MAX);
// 	line = 0;
// 	buf_char_index = 0;
// 	dict_values_index = 0;
// 	while (buffer[buf_char_index] != '\0')
// 	{
// 		while (buffer[buf_char_index] != ':')
// 		{
// 			if (buffer[buf_char_index] >= '0' && buffer[buf_char_index] <= '9')
// 			{
// 				dictionary[line][0][dict_values_index] = buffer[buf_char_index];
// 				dict_values_index++;
// 			}
// 			buf_char_index++;
// 		}
// 		buf_char_index++;
// 		dictionary[line][0][dict_values_index] = '\0';
// 		dict_values_index = 0;
// 		while (buffer[buf_char_index] == ' ')
// 			buf_char_index++;
// 		while (buffer[buf_char_index] != '\n')
// 		{
// 			dictionary[line][1][dict_values_index] = buffer[buf_char_index];
// 			dict_values_index++;
// 			buf_char_index++;
// 		}
// 		dictionary[line][1][dict_values_index] = '\0';
// 		dict_values_index = 0;
// 		line++;
// 		buf_char_index++;
// 	}
// 	return (0);
// }

char	*get_single_digits(char *path, char ***dictionary)
{
	int		file_desc;
	int		size;
	char	buffer[MAX];
	int		buf_char_index;
	int		dict_values_index;
	int		i;
	char	*temp_needle;

	file_desc = open(path, O_RDONLY);
	if (file_desc == -1)
		return (0);
	size = read(file_desc, buffer, MAX);
	temp_needle = malloc(sizeof(char) * 10);
	i = 0;
	while (i < 10)
	{
		strcpy(temp_needle, (char[2]) {i + '0', '\0'} );
		ft_strstr(buffer, temp_needle)[0];
	}
}

int	main(void)
{
	char	***dictionary;
	int		number_of_lines = 64;
	int		chars_per_line = 64;
	int		i = 0;
	while (i < number_of_lines)
	{
		dictionary[i] = malloc(2 * chars_per_line * sizeof(char));
		dictionary[i][0] = malloc(sizeof(char) * 10);
		dictionary[i][1] = malloc(sizeof(char) * chars_per_line);
		i++;
	}
	printf("%s\n", get_single_digits("test.txt", dictionary));
	return (0);
}
