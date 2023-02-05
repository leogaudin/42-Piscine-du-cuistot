/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:40:38 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:41:50 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			is_lowercase = 0;
		str++;
	}
	return (is_lowercase);
}

int main(int argc, char const *argv[])
{
	printf("is_lowercase returned %d\n", ft_str_is_lowercase("SHIT"));
	return 0;
}
