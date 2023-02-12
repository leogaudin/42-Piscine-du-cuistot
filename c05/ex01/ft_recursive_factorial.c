/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:13:52 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/12 15:13:32 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 0;
	if (nb <= 1)
		return (1);
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
