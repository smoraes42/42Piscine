/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:00:32 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/10 21:04:11 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		count;

	(void) argc;
	count = 0;
	while (argv[0][count] != '\0')
		count++;
	write(1, argv[0], count);
	write(1, "\n", 1);
	return (0);
}
