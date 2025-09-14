/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:15:12 by lformank          #+#    #+#             */
/*   Updated: 2024/06/06 20:20:53 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ds;
	size_t	sr;

	sr = ft_strlen(src);
	ds = ft_strlen(dst);
	if (ds >= size)
		ds = size;
	if (ds == size)
		return (size + sr);
	if (sr < (size - ds))
		ft_memcpy(dst + ds, src, sr + 1);
	else
	{
		ft_memcpy((dst + ds), src, (size - ds - 1));
		dst[size - 1] = '\0';
	}
	return (ds + sr);
}

/*int	main(void)
{
	char 	dst[11] = "a";
	const char 	src[] = "lorem";
	size_t	size = 15;

	printf("%zu\n", ft_strlcat(dst, src, size));
	printf("%s\n", dst);
}*/
