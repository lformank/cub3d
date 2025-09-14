/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 10:27:20 by lformank          #+#    #+#             */
/*   Updated: 2024/06/09 10:30:49 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if ((char)c >= 97 && (char)c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

/*int main(void)
{
    printf("%c\n", ft_toupper('K'));
    printf("%c\n", ft_toupper('l'));
    printf("%c\n", ft_toupper('5'));
    printf("%c\n", ft_toupper(0));
}*/
