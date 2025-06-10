/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:18:58 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/10 07:19:01 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	void **tmp;
	size_t i ;

	i = 0;
	if(dest == NULL || src == NULL)
		return (NULL);
	*tmp = src;
	while(i < n)
	{
		if(src < dest)
			((unsigned char*)dest)[i] = ((unsigned char*)tmp)[i];
		else
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i ++;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char src[] = "Hello, World!";
	char dest[20];

	ft_memmove(dest, src, 13);
	printf("Destination after memmove: %s\n", dest);

	// Test overlapping regions
	char overlap[] = "Overlap Test";
	ft_memmove(overlap + 5, overlap, 7);
	printf("After overlapping memmove: %s\n", overlap);

	return 0;
}