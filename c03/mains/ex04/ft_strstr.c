/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:12:48 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 17:45:06 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	char first[] = "Bonjour";
	char second[] = "joure";
	printf("ft_strstr returned %s\n", ft_strstr(first, second));
	char first2[] = "Bonjour";
	char second2[] = "joure";
	printf("strstr returned %s\n", strstr(first2, second2));
	return 0;
}
