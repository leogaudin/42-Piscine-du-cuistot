/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:16:32 by lgaudin           #+#    #+#             */
/*   Updated: 2023/02/06 12:31:39 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	total_size;

	dest_size = 0;
	src_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[src_size])
		src_size++;
	total_size = src_size + dest_size;
	i = 0;
	while (src[i] && dest_size < size - 1)
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	return (total_size);
}