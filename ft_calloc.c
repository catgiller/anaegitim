/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:17:49 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/21 18:09:05 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*malloc_ptr;
	size_t	malloc_size;

	malloc_size = nmemb * size;
	malloc_ptr = malloc(malloc_size);
	if (!malloc_ptr)
		return (NULL);
	ft_memset(malloc_ptr, 0, malloc_size);
	return (malloc_ptr);
}
