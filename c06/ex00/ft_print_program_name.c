/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:05:22 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/15 16:52:32 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	length;

	length = 0;
	while (argv[argc - argc][length])
		length++;
	write(1, argv[argc - argc], length);
	write(1, "\n", 1);
	return (0);
}
