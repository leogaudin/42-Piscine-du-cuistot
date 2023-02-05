/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:11:28 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 20:45:34 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	return (dest);
}

int main(void)
{
	char first[] = "Bonjour salut ca va";
	char second[] = "Hello";
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	printf("ft_strncpy returned %s\n\n", ft_strncpy(first, second, 6));
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	return 0;
}
