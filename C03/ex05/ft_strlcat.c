/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:16:50 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/06 23:21:47 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_s;
	unsigned int	i_ds;

	i_s = 0;
	i_ds = 0;
	while (dest[i_ds] != '\0' && i_ds < size)
		i_ds++;
	while (src[i_s] != '\0')
	{
		dest[i_ds] = src[i_s];
		i_ds++;
		i_s++;
	}
	dest[i_ds] = '\0';
	return (dest);
}
