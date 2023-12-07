/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <smoraes-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:17:17 by smoraes-          #+#    #+#             */
/*   Updated: 2023/11/28 19:32:51 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main(int argc, char **argv)
{
	
	if (argc != 4)
	{
		return (-1);
	}
	else
	{
		unsigned int btcp = atoi(argv[3]);
			static unsiged int srcL = 0;
			static unsigned int dstL = 0;
			
			while (argv[1][srcL] != '\0')
				srcL++;
			while (argv[2][dstL] != '\0')
				dstL++;
		ft_strncpy(argv[1], argv[2], btcp);

		for(int i = 0; argv[1][i]!= '\0'; i++)
		{
			printf("%c", argv[1][i]);
		}
		for(int i = 0; argv[2][i]!= '\0'; i++)
		{
			printf("%c", argv[2][i]);
		}
	}
	

		
	return (0);
}
*/
