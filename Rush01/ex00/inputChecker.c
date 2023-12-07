/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputChecker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:43:50 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/03 18:29:41 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	print_usage(void)
{
	write(1, "[+] Usage: \n", 12);
	write(1, "\tExpected input format:\n", 24);
	write(1, "\"4 3 2 1 1 3 4 ... \" up to (max n)^2 numbers.", 45);
}

int	check_spc_input(int argc, char **argv)
{
	int	length;

	length = 0;
	if (argc != 2)
		return (1337);
	else
	{
		while (argv[1][length] != '\0')
		{
			if (length % 2 == 1)
			{
				if (argv[1][length] != 32)
					return (1337);
			}
			length++;
		}
	}
	return (length);
}

int	check_integers_input(char **argv, int length)
{
	int		ind;
	char	max;

	ind = 0;
	max = 1;
	while (ind < length)
	{
		if (ind % 2 == 0)
		{
			if (argv[1][ind] < '1' || argv[1][ind] > '9')
				return (1337);
			else
				if (argv[1][ind] > max)
					max = argv[1][ind];
		}
		ind++;
	}
	return (max);
}

int	check_input_lgt(char **argv, int length, char max, char cleanArray[])
{
	int	expected_length;

	printf("\n Max = %c", max);
	expected_length = (((max - 48) * 8) - 1);
	printf("\n Expected Length = %d", expected_length);
	if (length == expected_length)
	{
		int ind;
		int clind;

		ind = 0;
		clind = 0;
		while(ind < length)
		{
			if(argv[1][ind] != 32)
			{
				cleanArray[clind] = argv[1][ind];
				clind++;
			}
			ind++;
		}
		return (1);
	}
	else
		return (1337);
}
