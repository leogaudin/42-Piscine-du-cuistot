/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:18:38 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/09 18:49:37 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0)
		result = 1;
	else if (power == 1)
		result = nb;
	else if (power == -1)
		result = 1 / nb;
	else if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else if (power < 0)
		result = 1 / ft_recursive_power(nb, power * -1);
	else
		result = 0;
	return (result);
}
