/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:47:19 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/12 17:43:42 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	{
		printf("Adding %d to array[%d]\n", min, i);
		array[i++] = min++;
	}
	return (array);
}

int main(int argc, char const *argv[])
{
	int a = -11;
	int b = 10;
	printf("Range betwenn %d and %d is %d\n", a, b, get_range(a, b));
	int i = 0;
	int *array = ft_range(a, b);
	while (i < get_range(a, b) - 1)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}
	return 0;
}
