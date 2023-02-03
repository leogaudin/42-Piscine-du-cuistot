/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:57:48 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/03 20:03:36 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j++ < y)
	{
		while (i++ < x)
		{
			if (i == 1 && j == 1 || i == x && j == y)
				ft_putchar('/');
			else if (i == 1 && j == y || i == x && j == 1)
				ft_putchar('\\');
			else if (j == 1 || j == y || i == 1 || i == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i = 0;
	}
	return ;
}
