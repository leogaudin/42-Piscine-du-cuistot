/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:52:54 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 17:43:01 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_size;

	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	i = 0;
	while (i < nb && src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}

int main(int argc, char const *argv[])
{
	char first[100] = "Bonjour";
	char second[] = "Bonjou";
	printf("ft_strcat returned %s\n", ft_strncat(first, second, 3));
	char first2[100] = "Bonjour";
	char second2[] = "Bonjou";
	printf("strcat returned %s\n", strncat(first2, second2, 3));
	return 0;
}
