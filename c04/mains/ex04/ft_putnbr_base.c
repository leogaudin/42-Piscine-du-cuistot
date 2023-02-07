/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:49:00 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/07 11:24:22 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_base_valid(char *base)
{
	int	is_valid;
	int	i;
	int	j;

	is_valid = 1;
	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			is_valid = 0;
		j = i;
		while (base[j + 1])
		{
			if (base[i] == base[j + 1])
				is_valid = 0;
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		is_valid = 0;
	return (is_valid);
}

void	get_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (nbr > size)
	{
		get_base(nbr / size, base);
		get_base(nbr % size, base);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (is_base_valid(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	get_base(nbr, base);
}

int main(int argc, char const *argv[])
{
	char base[] = "0123456789abcdef";
	int number = -13;
	printf("Number: \t%d\n", number);
	printf("Base: \t\t%s\n", base);
	printf("Is base valid? \t%d\n", is_base_valid(base));
	printf("Result: \t");
	ft_putnbr_base(number, base);
	return 0;
}
