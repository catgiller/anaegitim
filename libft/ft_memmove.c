/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:18:58 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/11 09:56:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	**tmp;
	size_t	i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	*tmp = src;
	while (i < n)
	{
		if (src < dest)
			((unsigned char*)dest)[i] = ((unsigned char*)tmp)[i];
		else
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i ++;
	}
	return (dest);
}
