/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:37:15 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:38:01 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
