/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_Pointer_Void.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:34:44 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 09:41:14 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	printData(void *data, char dataType)
{

	if (dataType == 'i')
		printf("Integer: %d\n", *((int *) data));
	else if (dataType == 'f')
		printf("Float: %E\n", *((float *)data));
	else if (dataType == 'c')
		printf("Character: %c\n", *((char *)data));
	else
		printf("Unknow data type.\n");
}

int main(void)
{
	int intValue = 42;

	printData(&intValue, 'i');
	printData(&intValue, 'f');
	printData(&intValue, 'c');

	return (0);
}
