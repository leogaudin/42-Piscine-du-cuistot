/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:13:52 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 13:17:46 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int main(int argc, char const *argv[])
{
	char string[] = "Salut les potos";
	printf("strlen returned %d for string \"%s\"\n", strlen(string), string);
	printf("ft_strlen returned %d for string \"%s\"\n", ft_strlen(string), string);
	return 0;
}
