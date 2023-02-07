/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:18:38 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/07 17:22:05 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (0);
	i = 0;
	result = 1;
	while (i++ < power)
		result *= nb;
	return (result);
}

int main(void)
{
	int nb = 10;
	int power = 2;
	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
	return 0;
}
