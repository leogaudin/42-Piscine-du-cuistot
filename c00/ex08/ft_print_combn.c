/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:19:48 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/21 12:06:04 by lgaudin          ###   ########.fr       */
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

void	ft_print_current(int *cursor, int n, int *combination)
{
	while (*cursor < n)
	{
		ft_putchar('0' + combination[(*cursor)]);
		*cursor += 1;
	}
}

void	ft_print_combn(int n)
{
	int		combination[10];
	int		cursor;
	int		max_digit;
	int		digit;

	cursor = -1;
	while (++cursor < n)
		combination[cursor] = cursor;
	while (cursor > 0)
	{
		max_digit = 10;
		cursor = 0;
		ft_print_current(&cursor, n, combination);
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
