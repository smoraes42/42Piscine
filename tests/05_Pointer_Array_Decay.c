/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_Pointer_Array_Decay.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:33:13 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 14:55:57 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Allowd for more flexible function calls. Since arrays decay into pointers,
 functions can accpet arrays of different sizes without the need to define
 multiple function signatures. This flexibility simplifies the code and
 enhances reusability

Downsides:
Loos of size information makes it necessary to pass the size of the array as a 
separate parameter to functions, or to se a sentinel value

void foo(int arr[], int size);

  */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void	print_elements(int *v, int size)
{
	printf("sizeof v: %zu\n", sizeof v);

	for (int i = 0; i < size; ++i)
		printf("%d\n", v[i]);
}

//void	foo(int arr[])
//{
//	printf("All foo here! \n");
//}

int main(void)
{
	int v[SIZE];

	for (int i = 0; i < SIZE ; ++i)
		v[i] = rand() % 101;

	print_elements(v, SIZE);
	//int arr[1000000];
	//foo(arr);

}
