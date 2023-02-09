/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:05:22 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/09 19:08:16 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char const *argv[])
{
	int	length;

	length = 0;
	while (argv[0][length])
		length++;
	write(1, argv[0], length);
	write(1, "\n", 1);
	return (0);
}
