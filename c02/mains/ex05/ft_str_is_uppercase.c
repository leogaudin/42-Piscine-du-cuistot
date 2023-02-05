/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:43:38 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:44:37 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			is_uppercase = 0;
		str++;
	}
	return (is_uppercase);
}

int main(int argc, char const *argv[])
{
	printf("is_uppercase returned %d\n", ft_str_is_uppercase("SHIT"));
	return 0;
}
