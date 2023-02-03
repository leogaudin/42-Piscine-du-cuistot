/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:19:58 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/03 19:52:29 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j++ < x)
	{
		while (i++ < y)
		{
			if (i == 1 && j == 1 || i == y && j == 1)
				ft_putchar('A');
			else if (i == 1 && j == x || i == y && j == x)
				ft_putchar('C');
			else if (j == 1 || j == x || i == 1 || i == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i = 0;
	}
	return ;
}
