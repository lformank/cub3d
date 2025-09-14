/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:22:19 by lformank          #+#    #+#             */
/*   Updated: 2024/06/14 17:22:11 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*new(const char *s1, size_t start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (0);
	while (i < len)
	{
		dest[i] = s1[start + i];
		i++;
	}
	return (dest);
}

int	check(const char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	if (!s1)
		return ((char *)s1);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (check(s1[i], set))
		i++;
	while (check(s1[j], set))
		j--;
	return (new(s1, i, j + 1 - i));
}

/*int	main(void)
{
	printf("%s\n", ft_strtrim("", ""));
}*/
