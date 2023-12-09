/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_Pointer_Cast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 07:35:08 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 08:01:14 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main()
{
	int nb;
	int *ptr;

	nb = 42;
	ptr = &nb;

	printf("&nb:\t\t\t%p\n", &nb);
	printf("ptr ( ptr = &nb):\t%p\n", ptr);
	printf("*ptr:\t\t\t%d\n", *ptr);
	printf("&*ptr:\t\t\t%p\n", &ptr);
	printf("*(float *)ptr:\t\t%0.60f\n",*(float *)ptr);

	int bin;
	int *ptr_b;

	bin = 0b00111001;
	ptr_b = &bin;

	printf("*ptr_b:\t\t\t%d\n *(char *)ptr_b:\t%c\n", *ptr_b, *(char *)ptr_b);
}
