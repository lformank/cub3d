/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:40:26 by lformank          #+#    #+#             */
/*   Updated: 2025/03/28 19:41:19 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	minus;

	i = 0;
	n = 0;
	minus = 1;
	if (nptr[i] == 0)
		return ('\0');
	while (nptr[i] == '\0' || nptr[i] == '\f' || nptr[i] == '\n' || nptr[i]
		== '\r' || nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		minus = -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (nptr[i] - 48) + (10 * n);
		i++;
	}
	return (minus * n);
}
