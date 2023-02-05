/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:58:30 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 18:31:04 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
		size++;
	}
	str -= size;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
		i++;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				if (str[i] >= '0' && str[i] <= '9')
					i++;
				else
				{
					str[i + 1] -= 32;
					i++;
				}
			}
		}
		i++;
	}
	return (str);
}


int main(int argc, char const *argv[])
{
	char string[] = "asdf-qWeRtY ZXCV 100TIS";
	printf("ft_strcapitalize returned %s\n", ft_strcapitalize(string));
	return 0;
}
