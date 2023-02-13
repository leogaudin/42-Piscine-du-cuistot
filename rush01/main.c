/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:56:26 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/12 13:47:13 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define SIZE 4

int	ft_atoi(char *str)
{
	int		i;
	int		negative;
	int		result;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= negative;
	return (result);
}

int	**build_puzzle(int argc, char *argv[])
{
	int	row;
	int	col;
	int	i;
	int	*clues;
	int	**puzzle;

	clues = malloc(sizeof(int) * (SIZE * SIZE));
	puzzle = malloc(sizeof(int) * (SIZE * SIZE));
	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) > SIZE)
			return ;
		else
			clues = ft_atoi(argv[i++]);
	}
	i = 1;
	row = 1;
	col = 1;
	if (argv[1] == 4)
	{
		while (row <= 4)
			puzzle[col][row++] = i++;
		row = 1;
		i = 1;
	}
	else if (argv[1] == 1)
		puzzle[col][row] = 4;
	return (puzzle);
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
