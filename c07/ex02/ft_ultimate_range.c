/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:07:08 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/14 16:28:58 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = 0;
	while (min + size <= max)
		size++;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
		range[0][i++] = min++;
	return (size);
}
