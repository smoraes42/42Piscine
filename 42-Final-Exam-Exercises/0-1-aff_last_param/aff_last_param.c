/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:43:40 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 22:54:21 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char **argv)
{
	int	lgt;
	lgt = 0;
	while (argv[1][lgt] != '\0')
		lgt++;
	return lgt;
}


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		int x;
		x = ft_strlen(argv);
		write(1,argv[argc-1],x);
	}
	write(1, "\n", 1);
	return (0);
}
