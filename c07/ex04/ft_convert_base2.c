/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:35:25 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/22 10:28:08 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/**
 * @brief
 * Check if a base is valid.
 *
 * If it contains a '+', a '-' or a ' ', it is not.
 * If it has duplicate characters, it is not.
 * If it is less than 1 character long, it is not.
 *
 * @param    base the base to check
 * @return int    0 if base is not valid, 1 if it is
 */
int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i;
		while (base[j + 1])
		{
			if (base[i] == base[j + 1])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

/**
 * @brief
 * Reverse the array of chars pointed by *tab.
 *
 * e.g. [t, u, l, a, s] becomes [s, a, l, u, t].
 *
 * @param    tab  a pointer to the array to be reversed
 */
void	ft_rev_char_tab(char *tab)
{
	int		i;
	int		size;
	char	*copy;

	i = 0;
	size = 0;
	while (tab[size])
		size++;
	copy = malloc(sizeof(char) * size + 1);
	while (i < size)
	{
		copy[i] = *tab;
		if (i != size - 1)
			tab++;
		i++;
	}
	i--;
	tab -= (size - 1);
	while (i >= 0)
		*tab++ = copy[i--];
	free(copy);
}

/**
 * @brief
 * Replicate the power function.
 *
 * @param    nb    the number to be put to power
 * @param    power the power
 * @return int     the result
 */
int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0)
		result = 1;
	else if (power == 1)
		result = nb;
	else if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else
		result = 0;
	return (result);
}

/**
 * @brief
 * Replicate a toggle behaviour on booleans.
 * (If 0, flip to 1, if 1, flip to 0)
 *
 * @param    bool the boolean to toggle
 */
void	flip_bool(int *bool)
{
	if (*bool == 0)
		*bool = 1;
	else if (*bool == 1)
		*bool = 0;
	else
		*bool = 0;
}

/**
 * @brief
 * Check if a number in a string is negative.
 *
 * Supports multiple '-' symbols.
 *
 * @param    str  the string to analyse
 * @return int    0 if positive, 1 if negative
 */
int	is_negative(char *str)
{
	int		is_negative;
	int		i;

	i = 0;
	is_negative = 0;
	while (str[i])
	{
		if (str[i] == '-')
			flip_bool(&is_negative);
		i++;
	}
	return (is_negative);
}
