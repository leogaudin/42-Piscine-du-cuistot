/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:10:28 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/19 15:15:02 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/**
 * @brief
 * A library-less implementation of strlen.
 *
 * @param    str  the string which length is asked
 * @return int    the length of the string
 */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

/**
 * @brief
 * A customised version of ft_strcat, that returns a pointer to the
 * end of the appended string.
 *
 * @param    dest the string to be appended
 * @param    src  the string to append
 * @return char*  a pointer to the last character of the result
 */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	i = 0;
	while (src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (&dest[dest_size]);
}

/**
 * @brief
 * We first ensure that we return an empty string if the array of
 * strings is empty.
 *
 * Then, we calculate the number of bytes needing to be allocated.
 * i.e. the sum of every string's length, plus the size of the
 * separator string multiplied by how many there will be of it.
 *
 * For every string in the array, we use the modified ft_strcat
 * function to append the string, then the separator if we did
 * not reach the last string.
 *
 * @param    size the number of strings in the array
 * @param    strs the array of strings
 * @param    sep  the separator string
 * @return char*  the resulting string
 */
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		string_index;
	int		bytes;
	char	*joined_string;

	string_index = 0;
	bytes = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	while (string_index < size)
		bytes += ft_strlen(strs[string_index++]);
	joined_string = malloc(sizeof(char)
			* (bytes + ft_strlen(sep) * (size - 1) + 1));
	string_index = 0;
	while (string_index < size)
	{
		ft_strcat(joined_string, strs[string_index]);
		if (string_index < size - 1)
			ft_strcat(joined_string, sep);
		string_index++;
	}
	return (joined_string);
}
