/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:43:38 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:44:43 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
