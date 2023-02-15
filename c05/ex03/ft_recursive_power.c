/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:18:38 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/15 16:23:08 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0)
		result = 1;
	else if (power == 1)
		result = nb;
	else if (power < 0)
		result = 0;
	else if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else
		result = 0;
	return (result);
}
