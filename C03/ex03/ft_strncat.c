/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:54:38 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/06 20:10:29 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i_s;
	int	i_ds;

	i_s = 0;
	i_ds = 0;
	while (dest[i_ds] != '\0')
		i_ds++;
	while (src[i_s] != '\0' && nb)
	{
		dest[i_ds] = src[i_s];
		i_ds++;
		i_s++;
		nb--;
	}
	dest[i_ds] = '\0';
	return (dest);
}
/*
int main(void)
{
	char s1[8] = "abcdefgh";
	char dst[12] = "00";

	ft_strcat(dst, s1);
	printf("%s", dst);

	return (0);
}
*/
