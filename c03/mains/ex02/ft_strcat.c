/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:52:54 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 17:41:56 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	return (dest);
}

int main(int argc, char const *argv[])
{
	char first[100] = "Bonjour";
	char second[] = "Bonjou";
	printf("ft_strcat returned %s\n", ft_strcat(first, second));
	char first2[100] = "Bonjour";
	char second2[] = "Bonjou";
	printf("strcat returned %s\n", strcat(first2, second2));
	return 0;
}

