/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:20:07 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/16 13:27:24 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Execute with:
// cc */* tester.c -Wall -Werror -Wextra -o tester && ./tester

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NRM  "\x1B[0m"
#define RED  "\x1B[31m"
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define MAG  "\x1B[35m"
#define CYN  "\x1B[36m"
#define WHT  "\x1B[37m"

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	check(int condition, char *name)
{
	printf("%s: ", name);
	if (condition == 1)
		printf("%sOK%s", GRN, NRM);
	else if (condition == 0)
		printf("%sKO%s", RED, NRM);
	else
		printf("%sWhat the fuck%s", MAG, NRM);
	printf("\n");
}

int main(void)
{
	check(
		(strcmp(ft_strdup("Bonjour"), "Bonjour") == 0),
		"ft_strdup"
	);

	check(
		(ft_range(-42, 49)[0] == -42
		&&
		ft_range(-42, 49)[42] == 0),
		"ft_range"
	);

	int		**range = malloc(sizeof(int) * 100);
	check(
		(ft_ultimate_range(range, -42, 49) == 92),
		"ft_ultimate_range"
	);

	char *strings[] = {"Bonjour", "Beau gosse va", "Miaou miaou"};
	char *sep = " ! ";
	check(
		(strcmp(ft_strjoin(3, strings, sep), "Bonjour ! Beau gosse va ! Miaou miaou") == 0),
		"ft_strjoin"
	);

	char *input = "-2147483647";
	char *base_from = "0123456789";
	char *base_to = "0123456789abcdef";
	check(
		((strcmp(ft_convert_base(input, base_from, base_to), "-7fffffff") == 0)
		&&
 		(strcmp(ft_convert_base("-7fffffff", base_to, base_from), "-2147483647") == 0)),
		"ft_convert_base"
		);

	return (0);
}
