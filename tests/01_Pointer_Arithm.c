/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_Pointer_Arithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 08:21:44 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 09:33:01 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char c;
	char *pc;

	c = 'a';
	pc = &c;

	printf("pc:\t\t%p\n", pc);
	printf("*pc:\t\t%c\n", *pc);

	printf("pc + 1:\t\t%p\n", pc + 1);
	printf("*pc + 1:\t%c\n", *pc + 1);

	printf("pc + 2:\t\t%p\n", pc + 2);
	printf("*pc + 2:\t%c\n", *pc + 2);

	return (0);
}
