/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 10:58:09 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/21 13:01:44 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	int	src[5] = {97, 97, 97, 97, 97};
	int	dest[7] = {0};
	int	i = 0;

	ft_memcpy(dest, src, 9);

	while (i < 5)
	{
		printf("dest[%d] = %d\n", i, dest[i]);
		i++;
	}

	return (0);
}