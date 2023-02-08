/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:33:32 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/08 16:28:32 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	float	sqrt;
	float	temp;
	int		converted;

	sqrt = nb / 2;
	temp = 0;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (nb / temp + temp) / 2;
	}
	converted = sqrt * 10;
	if (converted % 10 != 0)
		return (0);
	else
		return (converted / 10);
}

int main(void)
{
	int number = 100;
	printf("The square root of %d is %d", number, ft_sqrt(number));
	return 0;
}
