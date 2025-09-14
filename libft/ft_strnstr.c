/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:51:00 by lformank          #+#    #+#             */
/*   Updated: 2024/06/06 20:58:17 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] == little[j] && i + j < len && big[i + j] != '\0')
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

/*int	main(void)
{
	printf("%s\n", ft_strnstr("kaficko vodicka kaficko", "vodicka", 20));
	printf("%s\n", ft_strnstr("kaficko vodicka kaficko", "vodicka", 0));
	printf("%s\n", ft_strnstr("kaficko vodicka kaficko", "vod", 20));
	printf("%s\n", ft_strnstr("kaficko vodicka kaficko", "", 20));
}*/
