/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_Pointer_wMalloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:12:59 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 10:37:47 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	bar()
{
	int nb;

	nb = 1337;
}

int	*foo()
{
	int *n;
	n = malloc(sizeof(int));
	*n = 42;
	return n;
}

int main(void)
{
	int *pn;

	pn = foo();
	printf("%d\n", *pn);
	bar();
	printf("%d\n", *pn);

	return (0);
}
