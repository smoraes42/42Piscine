/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:03:35 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/03 18:29:39 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	print_usage(void);
int		check_integers_input(char **argv, int length);
int		check_spc_input(int argc, char **argv);
int		check_input_lgt(char **argv, int length, char max, char cleanArray[]);

int	main(int argc, char **argv)
{
	int		length;
	char	max;
	int		check_pass;
	char 	*cleanArray = malloc((9 * 4) *sizeof(char));

	length = check_spc_input(argc, argv);
	printf("\n Length %d.", length);
	max = check_integers_input(argv, length);
	printf("\n Biggest number: %c.", max);
	check_pass = check_input_lgt(argv, length, max, cleanArray);
	if (check_pass == 1)
		printf("\n\n\n [+] Checks Passed ! \n\n\n");
	else
		printf("\n\n\n [!!] Checks Not passed.");
	return (0);
}
