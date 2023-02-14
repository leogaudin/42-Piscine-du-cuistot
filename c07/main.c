/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:20:07 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/14 16:29:47 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Execute with:
// cc */*  main.c -Wall -Werror -Wextra -o tester && ./tester


#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
// char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	printf("\n");
	char	ft_strdup_test[] = "Bonjour";
	printf("ft_strdup returned %s\n", ft_strdup(ft_strdup_test));

	printf("\n");
	int		min_ft_range = -42;
	int		max_ft_range = 42;
	printf("ft_range's first element is: %d\n", ft_range(min_ft_range, max_ft_range)[0]);

	printf("\n");
	int		**range = malloc(sizeof(int) * 100);
	printf("ft_ultimate_range's array is %d elements long\n", ft_ultimate_range(range, min_ft_range, max_ft_range));
	printf("ft_ultimate_range's first element of array is %d\n", *range[0]);

	printf("\n");
	return (0);
}
