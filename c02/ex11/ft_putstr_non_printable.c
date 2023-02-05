/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:58:46 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 18:18:57 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	get_hex(int char_decimal)
{
	if (char_decimal >= 0 && char_decimal < 10)
		ft_putchar('0' + char_decimal);
	else
		ft_putchar('a' + char_decimal - 10);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			get_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	ft_putstr_non_printable("\n");
	return 0;
}
