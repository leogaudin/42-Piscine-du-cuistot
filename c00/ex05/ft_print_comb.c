/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:19:39 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/02 17:54:25 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_3_chars(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_put_2_chars(char x, char y)
{
	ft_putchar(x);
	ft_putchar(y);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_put_3_chars(a, b, c);
				if (a != '7' || b != '8' || c != '9')
					ft_put_2_chars(',', ' ');
				else
					ft_putchar('\n');
				c++;
			}
			c = ++b + 1;
		}
		b = ++a;
	}
}
