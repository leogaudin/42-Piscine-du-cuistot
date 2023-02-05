/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:52:31 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 18:34:29 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

int main(int argc, char const *argv[])
{
	char first[] = "Hello";
	char second[] = "Bonjour connard de merde";
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	printf("ft_strlcpy returned %d\n\n", ft_strlcpy(first, second, 3));
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	return 0;
}
