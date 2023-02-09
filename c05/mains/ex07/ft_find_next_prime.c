/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:04:48 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/09 18:50:48 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	is_prime;
	int	i;

	if (nb <= 1)
		return (0);
	else
		is_prime = 1;
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			is_prime = 0;
			break ;
		}
		i++;
	}
	return (is_prime);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	next = nb;
	while (next)
	{
		if (ft_is_prime(next))
			return (next);
		next++;
	}
	return (-1);
}

int main(int argc, char const *argv[])
{
	int number = 921;
	printf("Next prime number after %d is %d\n", number, ft_find_next_prime(number));
	return 0;
}
