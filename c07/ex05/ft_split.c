/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:30:01 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/16 19:08:42 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
		while (charset[charset_index])
		{
			if (str[i] != charset[charset_index])
			{
				result[result_index][string_index] = str[i];
				string_index++;
				i++;
			}
			else
			{
				result_index++;
				i++;
				string_index = 0;
			}
			charset_index++;
		}
		charset_index = 0;
		i++;
	}
	result[result_index] = 0;
	return (result);
}
