/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:47:19 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/14 16:29:10 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	range = 0;
	while (min + range <= max)
		range++;
	if (min >= max)
		return (0);
	array = malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
		array[i++] = min++;
	return (array);
}
