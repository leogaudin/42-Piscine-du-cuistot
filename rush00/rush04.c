/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:07:55 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 09:04:33 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	j = 1;
	while (j++ <= y)
	{
		while (i++ <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y && y != 1 && x != 1))
				ft_putchar('A');
			else if ((i == x && j == 1) || (i == 1 && j == y))
				ft_putchar('C');
			else if (j == 1 || j == y || i == 1 || i == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		i = 1;
		ft_putchar('\n');
	}
}
