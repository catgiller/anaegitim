/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:19:35 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/13 12:06:10 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i = 0, j = 0, start, k;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * 1000);
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = malloc(i - start + 1);
		if (!res[j])
		{
			while (j > 0)
				free(res[--j]);
			free(res);
			return (NULL);
		}
		k = 0;
		while (start < i)
			res[j][k++] = s[start++];
		res[j++][k] = '\0';
	}
	res[j] = NULL;
	return (res);
}
