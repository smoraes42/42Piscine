/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:07:07 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/04 02:36:48 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	dest[size -1] = '\0';
	while (src[len] != '\0' && size != 1)
	{
		dest[len] = src[len];
		len++;
		size--;
	}
	return (len);
}

//int main(int argc, char **argv)
//{
//	(void) argc;
//	char dest[10];
//	ft_strlcpy(dest, argv[1], 10);
//	printf("%s\n", dest);
//
//	return (0);
//}
