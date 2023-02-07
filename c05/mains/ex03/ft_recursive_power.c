/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:18:38 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/07 17:49:29 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0)
		result = 1;
	else if (power == 1)
		result = nb;
	else if (power == -1)
		result = 1/nb;
	else if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else if (power < 0)
		result = 1 / ft_recursive_power(nb, power * -1);
	else
		result = 0;
	return (result);
}

int main(void)
{
	int nb = 6;
	int power = -2;
	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
	return 0;
}
