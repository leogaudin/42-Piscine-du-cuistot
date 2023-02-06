/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:49:00 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 19:26:56 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		if (base[i] == '+' || base[i] == '-')
			is_valid = 0;
		while (base[i+j])
		{
			if (base[i] == base[j+1])
				 is_valid = 0;
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		is_valid = 0;
	return (is_valid);
}

void	ft_putnbr_base(int nbr, char *base)
{

}

