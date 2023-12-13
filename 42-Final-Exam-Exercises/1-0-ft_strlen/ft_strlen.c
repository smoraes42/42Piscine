/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:58:59 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/13 17:07:15 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int lngt;
	
	lngt = 0;
	while (str[lngt] != '\0')
		lngt++;
	return (lngt);
}

int main(void)
{
	char v[12] = "abcdefghijk";
	int l = ft_strlen(v);

	printf("%d", l);

	return (0);	
}
