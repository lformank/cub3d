/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:13:46 by lformank          #+#    #+#             */
/*   Updated: 2024/05/30 18:19:00 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		*ptr = '\0';
		i++;
		ptr++;
	}
}
/*int	main(void)
{
	int	n = 5;
	char	str[] = "pasivista";

	puts(str);
	ft_bzero(str, n);
	puts(str);
}*/
