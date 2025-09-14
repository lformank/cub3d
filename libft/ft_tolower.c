/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 10:31:05 by lformank          #+#    #+#             */
/*   Updated: 2024/06/09 10:31:42 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if ((char)c >= 65 && (char)c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

/*int main(void)
{
    printf("%c\n", ft_tolower('K'));
    printf("%c\n", ft_tolower('l'));
    printf("%c\n", ft_tolower('5'));
    printf("%c\n", ft_tolower(0));
}*/
