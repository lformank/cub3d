/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:04:58 by lformank          #+#    #+#             */
/*   Updated: 2024/06/19 13:52:58 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*des;
	const char	*sr;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	des = (char *)dest;
	sr = (const char *)src;
	while (n > 0)
	{
		*des = *sr;
		des++;
		sr++;
		n--;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "hovno";
	const char	src[] = "nasrat";
	size_t	n;

	n = 6;
	puts(dest);
	ft_memcpy(dest, src, n);
	puts(dest);
	memcpy(dest, src, n);
	puts(dest);
}*/
