/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:28:54 by lformank          #+#    #+#             */
/*   Updated: 2024/06/06 19:12:35 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('z'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('?'));
	printf("%d\n", ft_isascii('\0'));
	printf("%d\n", ft_isascii(35));
}*/
