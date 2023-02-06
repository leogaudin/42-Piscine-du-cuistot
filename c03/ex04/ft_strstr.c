/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:12:48 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 12:13:00 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	needle_size;

	needle_size = 0;
	while (to_find[needle_size])
		needle_size++;
	if (needle_size == 0)
		return (str);
	while (*str++)
	{
		j = 0;
		while (j < needle_size)
		{
			if (*(str + j) == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (str);
			}
			else
				break ;
		}
	}
	return (0);
}
