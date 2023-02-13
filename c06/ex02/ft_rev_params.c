/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:16:05 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/13 09:44:27 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int	i;
	int	length;

	i = argc - 1;
	length = 0;
	while (i > 0)
	{
		while (argv[i][length])
			length++;
		write(1, argv[i], length);
		write(1, "\n", 1);
		length = 0;
		i--;
	}
	return (0);
}
