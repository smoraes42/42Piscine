/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_value_vs_ref.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 06:46:31 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 07:26:58 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE_ARRAY 50

typedef	struct s_big_array
{
	char	v[SIZE_ARRAY];
}			t_big_array;

void	find_42(t_big_array *big_array)
{
	int i;

	i = 0;
	while(1)
	{
		if (big_array -> v[i] == 42)
		{
			printf("42 is in position %d\n", i);
			break;
		}
		i++;
	}
}

int main(void)
{

	t_big_array	big_array;
	srand(time(NULL));

	for ( int i = 0; i < SIZE_ARRAY; i++) big_array.v[i] = i;

	big_array.v[rand() % SIZE_ARRAY] = 42;

	find_42(&big_array);
	return (0);
}
