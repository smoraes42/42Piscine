/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:21:17 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 22:19:48 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	nrng;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nrng = max - min;
	result = malloc(sizeof(int) * (nrng));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	nrng = 0;
	while (max > min)
	{
		result[nrng] = min;
		min++;
		nrng++;
	}
	for (int j = 0; j < max; j++)
	{
		printf("%d ",*range[j]);
	}
	return (nrng);

}

int main(void)
{
	int arr[20];
	int z = ft_ultimate_range(arr, 3, 20);
	printf("%d", z);
	return (0);
}
