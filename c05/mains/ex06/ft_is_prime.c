/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:39:18 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/09 18:47:41 by lgaudin          ###   ########.fr       */
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

int main(int argc, char const *argv[])
{
	int number = 7;
	printf("Is %d prime? %d\n", number, ft_is_prime(number));
	return 0;
}
