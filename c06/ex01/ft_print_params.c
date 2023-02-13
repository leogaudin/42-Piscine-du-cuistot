/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:09:13 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/13 09:44:24 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	i;
	int	length;

	i = 1;
	length = 0;
	while (i < argc)
	{
		while (argv[i][length])
			length++;
		write(1, argv[i], length);
		write(1, "\n", 1);
		length = 0;
		i++;
	}
	return (0);
}
