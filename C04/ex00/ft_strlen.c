/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:47:46 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/07 09:55:17 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lgt;

	lgt = 0;
	while (*str++ != '\0')
		lgt++;
	return (lgt);
}
/*
int main(void)
{

	char s1[11] = "abcdefghij";
	int x = ft_strlen(s1);
	printf("%d", x);

	return (0);
}
*/
