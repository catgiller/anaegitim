/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:20:12 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/11 09:15:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (dsize == 0)
		return (ft_strlen(src));
	else
	{
		while (src[i] != '\0' && i < dsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (ft_strlen(src));
}
