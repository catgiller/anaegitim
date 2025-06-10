/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:18:52 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/10 07:18:54 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char * d = (char*) dest;
	const char* s = (const char*)src;
	size_t i = 0;
	
	while(i < n)
		d[i] = s[i];
	return (dest);
}
