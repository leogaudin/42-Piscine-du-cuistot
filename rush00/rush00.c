/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:53:27 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/04 10:34:10 by lgaudin          ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (i == x && j == 1))
				ft_putchar('o');
			else if ((i == 1 && j == y) || (i == x && j == y))
				ft_putchar('o');
			else if (j == 1 || j == y)
				ft_putchar('-');
			else if (i == 1 || i == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i = 0;
	}
	return ;
}
