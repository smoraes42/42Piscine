/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:59:28 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/15 00:10:06 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int ind;

	ind = 0;
	if (argc == 2)
	{
		while (argv[1][ind] && (argv[1][ind] == ' ' || argv[1][ind] == '\t'))
			// Mientras argumento uno no sea igual a null y argumento uno no sea espacio o tab
			ind++;
			// inncrementa index

		// cuando se deje de cumplir lo de arriba y ya empieza a haber input
		while (argv[1][ind] != '\0' && (argv[1][ind] != ' ' && argv[1][ind] != '\t'))
			// mientra input no sea espacios y mientra inputs non sean tabs
			// write
			write(1, &argv[1][ind], 1);
	}
	ft_putchar('\n');
	return (0);
}



//if (argc ==2)
//	{
//		while (*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
//			++argv[1];
//		while (*argv[1] != '\0' && (*argv[1] != ' ' && *argv[1] != '\t'))
//			write(1,argv[1]++,1);
//	}
//	ft_putchar('\n');
//	return (0);

