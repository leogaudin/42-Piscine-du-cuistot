/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:58:46 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 15:21:12 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	get_hex(int char_decimal)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (char_decimal > 16)
	{
		get_hex(char_decimal / 10);
		get_hex(char_decimal % 10);
	}
	else
		ft_putchar(hex[char_decimal]);
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

int main(int argc, char const *argv[])
{
	ft_putstr_non_printable("Coucou\btu vas bien ?");
	return 0;
}

