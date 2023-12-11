/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:08:48 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/11 15:22:57 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	root;
	int	count;

	root = nb;
	count = 1;
	while (root > count)
	{
		root = (root + count) / 2;
		count = nb / root;
	}
	if ((count * count) == nb)
		return (count);
	else
		return (0);
}
/*
int	atoi(char *argv)
{
	short 	parity;
	int		number;

	parity = 0;
	number = 0;
	while ((*argv >= 9 && *argv <=13) || *argv == 32)
		++argv;
	while (*argv == '+' || *argv == '-')
	{
		if (*argv == '-')
			parity++;
		++argv;
	}
	while (*argv >= 48 && *argv <= 57)
	{
		number *= 10;
		number += *argv -48;
		++argv;
	}
	if (!(parity %2))
		return (number);
	return (-number);
}
*/
/*
int main(int argc, char **argv)
{
	(void)argc;
	int rt = atoi(argv[1]);
	printf("root \"atoi(argv[1])\": %d\n", rt);

	while (rt-- >= 0)
	{
		printf("root %d\n", rt);

		int sqrt = ft_sqrt(rt);
		if (sqrt == 0)
			printf("\n");
		else
			printf("sqrt: %d\n", sqrt);
	}
	return (0);
}
*/
