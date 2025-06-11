/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:17:49 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/11 10:01:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
