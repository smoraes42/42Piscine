/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:50:39 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/10 16:07:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
		while (index)
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index < -1)
		return (-1);
	return (0);
}
/*
int main(void)
{
	int f = ft_fibonacci(100);

	printf("%d", f);

	return (0);
}
*/
