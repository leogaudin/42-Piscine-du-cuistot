/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:30:01 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/18 17:51:05 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		result_index;
	int		string_index;
	int		charset_index;
	int		i;

	i = 0;
	while (str[i])
		i++;
	result = malloc(sizeof(char) * i + i - 1);
	result_index = 0;
	string_index = 0;
	charset_index = 0;
	i = 0;
	while (str[i])
	{
		result[result_index][string_index++] = str[i++];
		// while (charset[charset_index])
		// {
		// 	if (str[i] != charset[charset_index])
		// 	{
		// 		result[result_index][string_index] = str[i];
		// 		string_index++;
		// 		i++;
		// 	}
		// 	else
		// 	{
		// 		result_index++;
		// 		i++;
		// 		string_index = 0;
		// 	}
		// 	charset_index++;
		// }
		// charset_index = 0;
		// i++;
	}
	result_index++;
	result[result_index] = 0;
	return (result);
}

/**
 * @brief
 * Count the number of strings in one big string,
 * based on the separators defined in charset.
 *
 * @param    str     the big string
 * @param    charset the separators
 * @return   int     the number of strings
 */
int	count_strings(char *str, char *charset)
{
	int	strings_count;
	int	is_char;
	int	separator_index;

	strings_count = 0;
	is_char = 0;
	separator_index = -1;
	while (*str++)
	{
		while (charset[++separator_index])
		{
			if (*str != charset[separator_index] && is_char == 0)
			{
				is_char = 1;
				strings_count++;
			}
			else if (*str == charset[separator_index])
			{
				is_char = 0;
				str++;
			}
		}
		separator_index = -1;
	}
	return (strings_count);
}

int main(int argc, char const *argv[])
{
	char str[] = "Salut, j'espère que ça va, moi top. Bonjourno....";
	char charset[] = " ";
	// char **result = ft_split(str, charset);
	printf("There are %d strings in \"%s\"\n", count_strings(str, charset), str);
	return 0;
}
