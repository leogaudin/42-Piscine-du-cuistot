/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:04:33 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/07 17:13:01 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb <= 0)
		return (0);
	result = 1;
	i = nb;
	while (i >= 1)
	{
		result *= i;
		i--;
	}
	return (result);
}

int main(void)
{
	int nb = 10;
	printf("%d! = %d\n", nb, ft_iterative_factorial(nb));
	return 0;
}
