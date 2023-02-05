/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:11:28 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 20:30:45 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	dest_size;

	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	i = 0;
	if (n > dest_size + 1)
		// return (NULL);
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int main(void)
{
	char first[] = "Bonjour salut ca va";
	char second[] = "Hello";
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	printf("ft_strncpy returned %s\n\n", strncpy(first, second, 6));
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	return 0;
}
