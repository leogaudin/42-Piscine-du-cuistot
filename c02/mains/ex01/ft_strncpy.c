/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:11:28 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 15:21:40 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}


int main(void)
{
	char first[] = "Bonjour salut ca va";
	char second[] = "Hello";
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	printf("ft_strncpy returned %s\n\n", ft_strncpy(first, second, 3));
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	return 0;
}
