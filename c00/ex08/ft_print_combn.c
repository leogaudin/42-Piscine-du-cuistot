/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:19:48 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/02 18:51:22 by lgaudin          ###   ########.fr       */
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

void	ft_print_combn(int n)
{
	int		combination[10];
	int		cursor;
	int		max_digit;
	int		digit;

	cursor = 0;
	while (cursor < n)
		combination[cursor++] = cursor;
	while (cursor > 0)
	{
		max_digit = 10;
		cursor = 0;
		while (cursor < n)
			ft_putchar('0' + combination[cursor++]);
		while (cursor--)
		{
			digit = combination[cursor];
			if (digit < --max_digit)
			{
				while (cursor < n)
					combination[cursor++] = ++digit;
				ft_put_2_chars(',', ' ');
				break ;
			}
		}
	}
}

int	main(int argc, char const *argv[])
{
	ft_print_combn(2);
	return (0);
}
