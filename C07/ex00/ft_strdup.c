/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:46:50 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/11 16:46:27 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int count;

	count = 0;
	while (*src++ != '\0')
		count++;
	return count;
}

char	*ft_strdup(char *src)
{
	int lg;
	char *dst;
	int	i;

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
		return NULL;
	}
	return dst;	
}

int main(void)
{
	char v[6] = "abcdf";
	int x = ft_strlen(v);
	printf("%d", x);

	char *dst = ft_strdup(v);
	printf("%s", dst);

	
	return (0);
}

