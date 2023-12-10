/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:05:09 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/10 22:43:27 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char **argv, int argc)
{
	int	ind;

	ind = 0;
	while (argv[argc][ind] != '\0')
		ind++;
	return (ind);
}

void	ft_putstr(char **argv, int c, int n)
{
	write(1, argv[c], n);
}

int	main(int argc, char **argv)
{
	int	lgt;
	int	argt;

	lgt = 0;
	argt = 1;
	while (argt < argc)
	{
		lgt = ft_strlen(argv, argt);
		ft_putstr(argv, argt, lgt);
		write(1, "\n", 1);
		argt++;
	}
	return (0);
}
