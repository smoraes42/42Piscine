/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:06:25 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 18:17:24 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char **argv)
{
	int ind;

	ind = 0;
	while (argv[1][ind] != '\0')
		ind++;

	return ind;
}


int main(int argc, char **argv)
{
	int len;

	if (argc >= 2)
	{
		len = ft_strlen(argv);
		char lent = len + '0';
		write(1,&lent,1);
	}
	return (0);

}
