/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:56:51 by lformank          #+#    #+#             */
/*   Updated: 2024/06/14 15:37:14 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	ft_size(const char *src)
{
	static int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_size(src);
	if (src == 0)
		return (i);
	if (i + 1 < size)
		ft_memcpy(dst, src, i + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (i);
}

/*int	main(void)
{
//	char	src[] = "coucou";
	char	dst[10] = "AAAAAAAAAA";

	printf("%zu\n", ft_strlcpy(dst, "", 42));
}*/
