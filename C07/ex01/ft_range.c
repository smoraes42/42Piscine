/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:06:39 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/11 18:11:24 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	i = 0;
	arr = (int *)malloc(size * sizeof(int));
	if (arr != NULL)
	{
		while (i < size)
		{
			arr[i] = min;
			min++;
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (arr);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 3;
	max = 15;
	int	*x = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d \n", x[i]);
		i++;
	}

	return (0);
}
*/
