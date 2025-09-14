/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:36:29 by lformank          #+#    #+#             */
/*   Updated: 2024/06/14 13:10:34 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	(ft_putstr(unsigned int i, char *s))
{
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "abc";

	ft_striteri(str, &ft_putstr);
	return (0);
}*/
