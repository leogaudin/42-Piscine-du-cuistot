/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:58:30 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 14:12:10 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
		size++;
	}
	str -= size;
	return (str);
}

int main(int argc, char const *argv[])
{
	char string[] = "BONJOUR TOIII 22 Y'A LES BLEUS";
	printf("ft_strlowcase returned %s\n", ft_strlowcase(string));
	return 0;
}
