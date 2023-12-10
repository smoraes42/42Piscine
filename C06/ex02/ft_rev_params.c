/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:47:46 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/10 22:49:31 by smoraes-         ###   ########.fr       */
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

	lgt = 0;
	while (argc-- > 1)
	{
		lgt = ft_strlen(argv, argc);
		ft_putstr(argv, argc, lgt);
		write(1, "\n", 1);
	}
	return (0);
}
