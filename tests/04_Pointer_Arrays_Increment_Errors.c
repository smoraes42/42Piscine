/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_Pointer_Arrays_Increment_Errors.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:27:04 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 13:35:04 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	//array
	int arr[10];
	arr[0] = 42;
	arr[1] = 1337;
	arr[2] = -21;

	//In the Stack
	printf("array addr:\t%p\n", arr);
	//Cannot increase array
	
	//sizeof
	printf("sizeof(arr):\t%zu\n", sizeof(arr));

	//& 
	printf("&arr:\t\t%p\n", &arr);
	printf("&arr[0]:\t%p\n", &arr[0]);
	printf("&arr[1]:\t%p\n", &arr[1]);
	printf("arr:\t\t%p\n", arr);

	//Pointer arithmetic
	printf("&arr + 1:\t%p\n", &arr + 1);
	printf("arr + 1:\t%p\n", arr + 1);

	puts("\n");

	return (0);
}
