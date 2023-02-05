/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:00:21 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 10:32:20 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX 1000

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	array[MAX];

	i = 0;
	while (i < size)
	{
		array[i] = *tab;
		if (i != size - 1)
			tab++;
		i++;
	}
	i--;
	tab -= (size - 1);
	while (i >= 0)
	{
		*tab++ = array[i];
		i--;
	}
}
