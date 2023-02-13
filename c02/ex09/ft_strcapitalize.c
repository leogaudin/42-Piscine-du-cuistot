/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:58:30 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/13 08:54:15 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char str)
{
	return (str >= '0' && str <= '9');
}

int	ft_str_is_lowercase(char str)
{
	return (str >= 'a' && str <= 'z');
}

int	ft_str_is_uppercase(char str)
{
	return (str >= 'A' && str <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	character;

	i = 0;
	if (str[i] && ft_str_is_lowercase(str[i]))
		str[i++] -= 32;
		i++;
	while (str[i])
	{
		character = str[i - 1];
		if (ft_str_is_lowercase(character) || ft_str_is_uppercase(character)
			|| ft_str_is_numeric(character))
			if (ft_str_is_uppercase(str[i]))
				str[i] += 32;
		else
			if (ft_str_is_lowercase(str[i]))
				str[i] -= 32;
		i++;
	}
	return (str);
}
