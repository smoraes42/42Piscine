/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:48:15 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/08 09:56:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
*/

#include <unistd.h>

void	aff_a(char *str)
{
	int ind = 0;
	while (str[ind] != '\0')
	{
		if(str[ind] == 'a')
		{
			write(1, &str[ind], 1);
			write(1, "\n", 1);
			return ;
		}
		ind++;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	aff_a(argv[1]);

	return (0);
}

