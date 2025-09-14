/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:56:00 by lformank          #+#    #+#             */
/*   Updated: 2024/06/19 13:52:28 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int					s;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	s = 0;
	while (n > 0)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			n--;
		}
		else
		{
			s = *str1 - *str2;
			return (s);
		}
	}
	return (0);
}

/*int	main(void)
{
	const unsigned char S1[] = "";
	const unsigned char S2[] = "hovno";
	size_t	n = 10;

	printf("%d\n", ft_memcmp(S1, S2, n));
	printf("%d\n", memcmp(S1, S2, n));
}*/
