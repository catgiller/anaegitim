/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 10:58:09 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/22 21:40:23 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *nazife;
    nazife = malloc(6);
    if (!nazife)
        return (1);
    ft_memset(nazife, 67, 4); // 'A' karakteriyle doldur
    nazife[4] = '\0';          // Null-terminator ekle
    printf("%s\n", nazife);
    free(nazife);
    return 0;
}