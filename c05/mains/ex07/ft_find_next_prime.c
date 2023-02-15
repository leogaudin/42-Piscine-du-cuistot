/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:04:48 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/15 16:24:30 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	next = nb;
	if (nb < 2)
		return (2);
	while (next)
	{
		if (ft_is_prime(next))
			return (next);
		next++;
	}
	return (2);
}

int main(int argc, char const *argv[])
{
	int number = 2147483647;
	printf("Next prime number after %d is %d\n", number, ft_find_next_prime(number));
	return 0;
}
