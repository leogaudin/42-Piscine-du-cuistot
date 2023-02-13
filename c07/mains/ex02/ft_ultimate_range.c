/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:07:08 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/13 10:01:44 by lgaudin          ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = get_range(min, max) - 1;
	if (min >= max)
		return ((void *)0);
	*range = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
		range[0][i++] = min++;
	return (size);
}

int main(int argc, char const *argv[])
{
	// int a = -11;
	// int b = 10;
	// printf("Range betwenn %d and %d is %d\n", a, b, get_range(a, b));
	// int i = 0;
	// int *array = ft_range(a, b);
	// while (i < get_range(a, b) - 1)
	// {
	// 	printf("array[%d] = %d\n", i, array[i]);
	// 	i++;
	// }
	// return 0;
}
