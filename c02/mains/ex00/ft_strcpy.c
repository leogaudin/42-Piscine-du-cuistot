/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:55:08 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:00:05 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define MAX 2048

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
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
	ft_strcpy(first, second);
	printf("First string is %s\n", first);
	printf("Second string is %s\n\n", second);
	return 0;
}