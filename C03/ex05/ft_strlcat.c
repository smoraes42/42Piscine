/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:16:50 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 02:42:14 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	leng;

	leng = 0;
	while (*str++ != '\0')
		leng++;
	return (leng);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lgt_s;
	unsigned int	lgt_dst;

	if (size <= ft_strlen(src))
		return (size + ft_strlen(src));
	lgt_s = 0;
	lgt_dst = ft_strlen(dest);
	while (src[lgt_s] != '\0' && (lgt_dst + 1 < size))
	{
		dest[lgt_dst] = src[lgt_s];
		lgt_dst++;
		lgt_s++;
	}
	dest[lgt_dst] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[lgt_s]));
}
