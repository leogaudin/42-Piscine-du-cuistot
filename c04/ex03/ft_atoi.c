/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:00:20 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 18:44:06 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	flip_bool(int *bool)
{
	if (*bool == 0)
		*bool = 1;
	else if (*bool == 1)
		*bool = 0;
	else
		*bool = 0;
}

int	is_space(char *c)
{
	if (*c == ' ')
		return (1);
	else if (*c == '\f')
		return (1);
	else if (*c == '\n')
		return (1);
	else if (*c == '\r')
		return (1);
	else if (*c == '\t')
		return (1);
	else if (*c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	returned_number;
	int	is_negative;

	returned_number = 0;
	is_negative = 0;
	while (*str)
	{
		if (is_space(str) == 1 || *str == '+')
			str++;
		else if (*str == '-')
		{
			flip_bool(&is_negative);
			str++;
		}
		else if (*str >= '0' && *str <= '9')
		{
			returned_number = (returned_number * 10) + (*str - '0');
			str++;
		}
		else
			break ;
	}
	if (is_negative == 1)
		returned_number *= -1;
	return (returned_number);
}
