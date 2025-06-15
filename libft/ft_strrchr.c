/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:20:32 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/15 12:34:40 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	while (slen > 0)
	{
		if (s[slen - 1] == (char)c)
			return ((char *)(s + slen - 1));
		slen--;
	}
	if (s[0] == (char)c)
		return ((char *)s);
	return (NULL);
}
