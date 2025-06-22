/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervsahin <ervsahin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 07:15:41 by ervsahin          #+#    #+#             */
/*   Updated: 2025/06/22 20:53:06 by ervsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sig;
	int	rst;

	rst = 0;
	sig = 1;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		nptr++;
	if (*nptr == '+')
	{
		sig = 1;
		nptr ++;
	}
	else if (*nptr == '-')
	{
		sig = -1;
		nptr ++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		rst = rst * 10 + (*nptr - '0');
		nptr ++;
	}
	return (rst * sig);
}
