/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:26:13 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:36:27 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			is_alpha = 0;
		str++;
	}
	return (is_alpha);
}

int main(int argc, char const *argv[])
{
	printf("is_alpha returned %d\n", ft_str_is_alpha("werewr"));
	return 0;
}
