/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <smoraes-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:23:06 by smoraes-          #+#    #+#             */
/*   Updated: 2023/11/24 13:31:52 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	int	*ptr_c;

	c = 0;
	ptr_c = &c;
	*ptr_c = *a;
	*a = *b;
	*b = *ptr_c;
}
