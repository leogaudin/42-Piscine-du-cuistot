/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:19:42 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/12 19:19:05 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_2_chars(char x, char y)
{
	ft_putchar(x);
	ft_putchar(y);
}

int	get_units(int x)
{
	return (x % 10);
}

int	get_tens(int x)
{
	return ((x - get_units(x)) / 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_put_2_chars('0' + get_tens(a), '0' + get_units(a));
			ft_putchar(' ');
			ft_put_2_chars('0' + get_tens(b), '0' + get_units(b));
			if (a != 98 || b != 99)
			{
				ft_put_2_chars(',', ' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
