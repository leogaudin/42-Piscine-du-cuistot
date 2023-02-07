/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:25:57 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/07 16:46:06 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX 2048

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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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

int	x_to_the_n(int x, int n)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i++ < n)
		result *= x;
	return (result);
}

// int	is_str_in_base(char *str, char *base)
// {
// 	int	i;
// 	int	j;
// 	int	char_is_in_base;
// 	int	str_is_in_base;

// 	str_is_in_base = 1;
// 	i = -1;
// 	while (str[++i])
// 	{
// 		j = -1;
// 		while (base[++j])
// 		{
// 			char_is_in_base = 0;
// 			if (str[i] == base[j])
// 			{
// 				char_is_in_base = 1;
// 				break ;
// 			}
// 		}
// 		if (char_is_in_base == 0)
// 			return (0);
// 	}
// 	return (1);
// }

void	flip_bool(int *bool)
{
	if (*bool == 0)
		*bool = 1;
	else if (*bool == 1)
		*bool = 0;
	else
		*bool = 0;
}

int	is_negative(char *str)
{
	int		is_negative;
	int		i;

	i = 0;
	is_negative = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			flip_bool(&is_negative);
		}
		i++;
	}
	return (is_negative);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	size;
	int	power;
	int	result;

	i = 0;
	size = 0;
	while (str[i])
		i++;
	while (base[size])
		size++;
	result = 0;
	power = 0;
	while (i--)
	{
		j = -1;
		while (base[++j])
			if (str[i] == base[j])
				result += j * x_to_the_n(size, power++);
	}
	if (is_negative(str))
		result *= -1;
	return (result);
}

int main(int argc, char const *argv[])
{
	char base[] = "0123456789abcdef";
	char str[] = "    ++-8fxxx";
	printf("Number: \t%s\n", str);
	printf("Base: \t\t%s\n", base);
	printf("is_base_valid? \t%d\n", is_base_valid(base));
	// printf("is_str_in_base? %d\n", is_str_in_base(str, base));
	printf("Result: \t%d\n", ft_atoi_base(str, base));
	return 0;
}
