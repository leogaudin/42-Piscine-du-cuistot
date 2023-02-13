/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:04:33 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/13 15:05:12 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0 || nb >= 13)
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
