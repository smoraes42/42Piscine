/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_Pointer_Array_Duality.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:03:57 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 14:31:17 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int v[10];
	v[1] = 42;

	printf("*(v+1):\t\t%d\n", *(v+1));
	printf("v[1]:\t\t%d\n", v[1]);
	printf("1[v]:\t\t%d\n", 1[v]);
	printf("\"hello\"[0]:\t%c\n", "hello"[0]);
	printf("*\"hello\":\t%c\n", *"hello");
	printf("2[\"hello\"]:\t%c\n", 2["hello"]);
	return (0);

}
