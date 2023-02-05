/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:11:28 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:18:36 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int main(int argc, char const *argv[])
{
	char first[] = "Hello";
	char second[] = "Bonjour";
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	ft_strncpy(first, second, 2);
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	return 0;
}
