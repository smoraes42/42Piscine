/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_Pointer_Malloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:43:16 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 10:03:59 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	bar()
{
	int nb;
	nb = 1337;
}

int *foo()
{
	int n;

	n = 42;
	return &n;
}

int main(void)
{
	int *pn;

	pn = foo();
	printf("*pn = foo():\t%d\n", *pn);
	bar();
	printf("bar():\t%d\n", *pn);


	return (0);
}
