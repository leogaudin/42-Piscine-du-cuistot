/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:49:00 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/14 10:31:38 by lgaudin          ###   ########.fr       */
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
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	get_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (nbr >= size)
		get_base(nbr / size, base);
	ft_putchar(base[nbr % size]);
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
	int number = -242552222;
	printf("Number: \t%d\n", number);
	printf("Base: \t\t%s\n", base);
	printf("Is base valid? \t%d\n", is_base_valid(base));
	ft_putnbr_base(number, base);
	return 0;
}
