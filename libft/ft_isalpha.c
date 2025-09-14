/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:44:45 by lformank          #+#    #+#             */
/*   Updated: 2024/06/06 18:05:52 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isalpha(35));
	printf("%d\n", ft_isalpha(58));
	printf("%d\n", ft_isalpha(96));
	printf("%d\n", ft_isalpha(123));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('\0'));
}*/
