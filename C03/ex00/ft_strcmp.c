/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:26:06 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/06 20:03:30 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	ind;

	ind = 0;
	while (s1[ind] == s2[ind] && s1[ind] != '\0' && s2[ind] != '\0')
		ind++;
	return (s1[ind] - s2[ind]);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (-1);

	int x; = ft_strcmp(argv[1], argv[2]);

	printf("x: %d", x);
	
	return (0);
}
*/
