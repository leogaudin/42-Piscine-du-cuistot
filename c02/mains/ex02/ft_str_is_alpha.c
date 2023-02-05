/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:26:13 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:35:06 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str)
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
			is_alpha = 0;
		str++;
	}
	return (is_alpha);
}

int main(int argc, char const *argv[])
{
	printf("is_alpha returned %d\n", ft_str_is_alpha("werewr1"));
	return 0;
}
