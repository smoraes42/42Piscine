/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:07:07 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 02:08:46 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	it;
	unsigned int	src_len;

	if (!dest || !src)
		return (0);
	src_len = 0;
	it = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
	{
		while (src[it] != '\0' && it < (size - 1))
		{
			dest[it] = src[it];
			it++;
		}
		dest[it] = '\0';
	}
	return (src_len);
}
//unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
//{
//	int	it;
//	int src_len;
//
//	src_len = 0;
//	it = 0;
//	while (src[src_len] != '\0')
//		i++;
//
//	if (size != 0)
//	{
//		while (src[len] != '\0' && it < (size -1))
//		{
//			dest[it] = src[it];
//			it++;
//		}
//		dest[it] = '\0';
//	}
//	return (src_len);
//}
//	len = 0;
//	dest[size-1] = '\0';
//	while (src[len] != '\0' || dst[len] != '\0')
//	{
//		dest[len] = src[len];
//		len++;
//		size--;
//	}
//	return (len);
//}
//int main(void)
//{
//	ft_strlcpy(NULL, NULL, 0);
//	return (0);
//}
//int main(void)
//{
//	char src[10] = "abcdefghi";
//	char dest[10];
//	ft_strlcpy(dest, src, 8);
//	printf("%s\n", dest);
//
//	return (0);
//}
