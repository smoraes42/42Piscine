/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:16:50 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/13 20:51:01 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 	- Appends the NULL-Terminated string *src to the end of the *dst
	
	- It will append at most the size, this means the initial length of dst plus
	the length of src 
	- Made this way to detect truncation 

	RETURN VALUES
	
	(dst_len + src_len) The total length of the array tried to create
	return >= dst_size the output string has been truncated, it's the caller's
	responsability to handle this.



   */

#include <stdio.h>
#include <unistd.h>
#include <strings.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dst;
	unsigned int	j;

	len_dst = ft_strlen(dest);
	j = 0;
	if (size <= len_dst)
		return (size + ft_strlen(src));
	while (src[j] && len_dst + j < (size -1))
	{
		dest[len_dst + j] = src[j];
		j++;
	}
	dest[len_dst + j] = '\0';
	return (ft_strlen(src) + len_dst);
}
