/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:54:17 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 17:55:03 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAX 10

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	array[MAX];
	int		digit_count;
	char	digit;
	int		i;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	digit_count = 0;
	while (nb)
	{
		digit = '0' + (nb % 10);
		array[digit_count++] = digit;
		nb /= 10;
	}
	i = digit_count - 1;
	while (i > -1)
	{
		ft_putchar(array[i--]);
	}
	ft_putchar('\n');
}

int main(int argc, char const *argv[])
{
	ft_putnbr(3255);
	return 0;
}
