/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:18:48 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/08 10:50:01 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_arg(char *str)
{
	int ind = 0;
	while (str[ind] != '\0')
		write(1, &str[ind++], 1);
}

int	main(int argc, char **argv)
{
	if (argc <=1)
	{
		write(1,"\n",1);
		return (0);
	}
	else
	{
		last_arg(argv[argc - 1]);
	}
	
	return (0);
}
