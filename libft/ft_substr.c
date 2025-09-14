/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 10:50:07 by lformank          #+#    #+#             */
/*   Updated: 2024/10/19 09:33:13 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(s);
	j = 0;
	if (start >= i)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dest = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (0);
	while (j < len)
	{
		dest[j] = s[j + start];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*s = "";

	printf("%s\n", ft_substr(s, 0, 0));
}*/
