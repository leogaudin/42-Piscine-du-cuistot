/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:31:55 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 18:52:09 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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
	char first[] = "Bonjourrrrr";
	char second[] = "Bonjourrrre";
	printf("strcmp returned %d\n", strncmp(first, second, 10));
	printf("ft_strcmp returned %d\n", ft_strncmp(first, second, 10));
	return 0;
}
