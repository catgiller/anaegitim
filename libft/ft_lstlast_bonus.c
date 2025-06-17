/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:08:58 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/15 15:49:45 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (lst != NULL)
	{
		while(temp->next != NULL)
			temp = temp->next;
		return (temp);
	}
	else
		return (NULL);
}