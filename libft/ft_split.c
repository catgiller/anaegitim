/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:19:35 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/18 16:22:42 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_word_dup(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_all(char **arr, size_t j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

static int	ft_fill_words(char **res, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[j] = ft_word_dup(s + start, i - start);
			if (!res[j])
				return (ft_free_all(res, j), 0);
			j++;
		}
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	if (!ft_fill_words(res, s, c))
		return (NULL);
	return (res);
}
