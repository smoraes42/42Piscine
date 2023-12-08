/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:02:41 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/08 10:17:37 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arg_displ(char *str)
{
	int ind = 0;
	while (str[ind] != '\0')
	{
		write(1, &str[ind], 1);
		ind++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		write(1,"\n",1);
		return (0);
	}
	if (argc == 2)
		arg_displ(argv[1]);
	return (0);
}

