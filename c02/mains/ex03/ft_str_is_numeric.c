/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:37:15 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:39:03 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			is_numeric = 0;
		str++;
	}
	return (is_numeric);
}

int main(int argc, char const *argv[])
{
	printf("is_numeric returned %d\n", ft_str_is_numeric("shit"));
	return 0;
}
