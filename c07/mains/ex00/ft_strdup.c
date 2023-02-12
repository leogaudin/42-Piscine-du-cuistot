/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:12:22 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/12 16:46:33 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*copy;

	length = 0;
	while (src[length])
		length++;
	copy = malloc(sizeof(char) * length);
	copy = src;
	return (copy);
}

int main(int argc, char const *argv[])
{
	char string[] = "thing to copy BOUUUUUUH";
	char *new = ft_strdup(string);
	printf("\"%s\" was copied into new[]\n", new);
	return 0;
}

