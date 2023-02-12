/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:47:19 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/12 18:06:34 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_range(int a, int b)
{
	int	range;

	range = 0;
	if (a < b)
		while (a++ <= b)
			range++;
	else if (a > b)
		while (a-- >= b)
			range++;
	else
		range = 1;
	return (range);
}

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	range = get_range(min, max) - 1;
	if (min >= max)
		return ((void *)0);
	array = malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
		array[i++] = min++;
	return (array);
}
