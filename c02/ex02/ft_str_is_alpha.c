/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:26:13 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 13:36:32 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
