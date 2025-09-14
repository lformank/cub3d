/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:33:30 by lformank          #+#    #+#             */
/*   Updated: 2024/05/31 13:35:07 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, const int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		*str = (unsigned char)c;
		i++;
		str++;
	}
	return (s);
}

/*int main(void)
{
	char	s[] = "prdel";
	size_t	n = 9;
	const int	c = 'i';

	printf("%s\n", (char *)ft_memset(s, c, n));
	memset(s, c, n);
	puts(s);
	return (0);
}*/
