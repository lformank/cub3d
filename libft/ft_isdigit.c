/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:00:44 by lformank          #+#    #+#             */
/*   Updated: 2024/06/06 18:10:43 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c = '5';
	printf("%d\n", ft_isdigit(c));
	int d = 'a';
	printf("%d\n", ft_isdigit(d));
	int e = 'z';
	printf("%d\n", ft_isdigit(e));
	int f = 'A';
	printf("%d\n", ft_isdigit(f));
	int g = '?';
	printf("%d\n", ft_isdigit(g));
	int h = '\0';
	printf("%d\n", ft_isdigit(h));
}*/
