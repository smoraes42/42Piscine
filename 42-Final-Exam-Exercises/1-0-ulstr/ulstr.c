/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 01:18:13 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/14 02:25:14 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int ind;

	ind = 0;
	if (argc != 2)
	{
		write(1, "\n" ,1);
		return (0);
	}
	while (argv[1][ind] != '\0')
	{
		if(argv[1][ind] >= 'a' && argv[1][ind] <= 'z')
			argv[1][ind] -= 32;
		else if(argv[1][ind] >= 'A' && argv[1][ind] <= 'Z')
			argv[1][ind] += 32;
		write(1,&argv[1][ind], 1);
		ind++;
	}
	return (0);
}
