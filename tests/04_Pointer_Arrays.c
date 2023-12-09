/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_Pointer_Arrays.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:15:05 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 12:38:33 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	//array
	int arr[10];

	// THE NAME OF AN ARRAY IS A SYNONYM FOR THE LOCATION OF THE 1ST ELEMENT
	// SO AN ARRAY IDENTIFIER IS "ALMOST' A POINTER
	printf("address of array:\t\t\t\t%p\n", arr);
	printf("address of 1st element of array:\t\t%p\n\n", &arr[0]);



	// Traditional array 
	arr[0] = 42;
	arr[1] = 1337;
	arr[2] = -21;
	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d]: %p  ||  arr[%d]: %d\n", i,&arr[i],i,arr[i]);
	}



	// FAKE array
	int *ptr = alloca(sizeof(int) *10);

	*(ptr + 0) = 42;
	*(ptr + 1) = 1337;
	*(ptr + 2) = -21;
	for (int i = 0; i < 10; i++)
		printf("&ptr + 1: %p ||  *(ptr + %d): %d\n", &*(ptr+i),i,*(ptr + i));

	return (0);
}
