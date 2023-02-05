/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_printable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:55:19 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 18:34:15 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str)
	{
		if (!(*str >= 32 && *str <= 127))
			is_printable = 0;
		str++;
	}
	return (is_printable);
}

int main(int argc, char const *argv[])
{
	printf("is_printable returned %d\n", ft_str_is_printable("~{}*"));
	return 0;
}
