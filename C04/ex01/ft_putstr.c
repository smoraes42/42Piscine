/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:57:21 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/07 18:56:29 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		write(1, &str[ind], 1);
		ind++;
	}
}
/*
int main(void)
{
	char s1[10] = "abcdefghi";
	ft_putstr(s1);

	return (0);
}
*/
