/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:52:54 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/05 19:08:21 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	i = 0;
	while (src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	return (dest);
}
