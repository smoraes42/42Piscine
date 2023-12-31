/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:46:50 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/11 17:05:54 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	count;

	count = 0;
	while (*src++ != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		lg;
	int		i;
	char	*dst;

	i = 0;
	lg = ft_strlen(src);
	dst = malloc(lg * sizeof(char));
	if (dst != NULL)
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (dst);
}
/*
int main(void)
{
	char v[6] = "abcdf";
	int x = ft_strlen(v);
	printf("len v[]: %d\n", x);
	printf("&src[]:%p\n",&v[6]);


	char *dst = ft_strdup(v);
	printf("&dst[]%p", &dst);
	printf("%s", dst);
	
	return (0);
}
*/
