/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:19:14 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 17:28:36 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	char first[] = "Bonrour";
	char second[] = "Bonjour";
	printf("strcmp returned %d\n", strcmp(first, second));
	printf("ft_strcmp returned %d\n", ft_strcmp(first, second));
	return 0;
}
