/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:44:23 by lformank          #+#    #+#             */
/*   Updated: 2024/06/14 16:17:33 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *)s;
	i = 0;
	uc = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	s[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s\n", (char *)ft_memchr(s, -1, 7));
}*/
