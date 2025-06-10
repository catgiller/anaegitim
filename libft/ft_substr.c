/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:20:45 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/10 07:20:47 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	char	*ft_substr(char const *s, unsigned int start, size_t len)
	{
	char	*substr;
	size_t	srln;
	size_t	i;

	if (!s)
		return (NULL);

	srln = ft_strlen(s);

	if (start >= srln)
		return (ft_strdup(""));

	if (len > srln - start)
		len = srln - start;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);

	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}

	substr[i] = '\0';
	return (substr);
}

