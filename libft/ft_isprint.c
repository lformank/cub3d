/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:45:23 by lformank          #+#    #+#             */
/*   Updated: 2024/06/19 13:43:53 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int c = '8';
	printf("%d\n", ft_isprint(c));
	int d = 'h';
	printf("%d\n", ft_isprint(d));
	int e = 31;
	printf("%d\n", ft_isprint(e));
	int f = ' ';
	printf("%d\n", ft_isprint(f));

	printf("%c\n", c, isprint(c));
	printf("%c\n", d, isprint(d));
	printf("%c\n", e, isprint(e));
	printf("%c\n", f, isprint(f));
}*/
