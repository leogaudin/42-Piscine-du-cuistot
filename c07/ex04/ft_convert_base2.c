/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:36:43 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/16 13:22:53 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_base_valid(char *base);
void	ft_rev_char_tab(char *tab);
int		ft_recursive_power(int nb, int power);
void	flip_bool(int *bool);
int		is_negative(char *str);

/**
 * @brief
 * Parse a string in the specified base and convert it
 * to decimal base.
 *
 * @param    str  the string to parse
 * @param    base the base of the string
 * @return int    the number in decimal base
 */
int	base_to_dec(char *str, char *base)
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
				result += j * ft_recursive_power(size, power++);
	}
	if (is_negative(str))
		result *= -1;
	return (result);
}

/**
 * @brief
 * (The arbitrary maximum length of the result is 32,
 * as the maximum number an int can take (-2147483648)
 * converted in the smallest base possible (binary) is
 * 32 characters long.)
 *
 * Compute the equivalent of a decimal number in the
 * specified base.
 *
 * @param    nbr    the decimal number to convert
 * @param    base   the base to convert it in
 * @return char*    the result of the conversion
 */
char	*dec_to_base(int nbr, char *base)
{
	int		size;
	int		index;
	int 	remainder;
	char	*result;

	size = 0;
	index = 0;
	remainder = 0;
	result = malloc(sizeof(char) * 32 + 1);
	while (base[size])
		size++;
	while (nbr > 0)
	{
		remainder = nbr % size;
		nbr /= size;
		result[index++] = base[remainder];
	}
	ft_rev_char_tab(result);
	return (result);
}

/**
 * @brief
 * (This function was appended '2' to avoid conflict and
 * duplicate symbols in the project)
 *
 * Return the concatenation of dest + src, in this order.
 *
 * @param    dest the string to append to
 * @param    src  the string to be appended
 * @return char*  the concatenated string
 */
char	*ft_strcat2(char *dest, char *src)
{
	int	i;
	int	dest_size;

	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	i = 0;
	while (src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}

/**
 * @brief
 * Convert a number from a base to another.
 *
 * Since we assume the equivalents are limited
 * by int's range, it is safe to use decimal
 * base as an intermediary.
 *
 * @param    nbr       the input number
 * @param    base_from the base of the input number
 * @param    base_to   the base of the output
 * @return char*       the number in output base
 */
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	char	*result;

	if (is_base_valid(base_from) == 0 || is_base_valid(base_to) == 0)
		return (0);
	decimal = base_to_dec(nbr, base_from);
	result = malloc(sizeof(char) * 32 + 1);
	if (decimal < 0)
	{
		result[0] = '-';
		decimal *= -1;
	}
	else if (decimal == 0)
	{
		result[0] = base_to[0];
		return (result);
	}
	return (ft_strcat2(result, dec_to_base(decimal, base_to)));
}
