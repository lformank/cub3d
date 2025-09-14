/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:09:52 by lformank          #+#    #+#             */
/*   Updated: 2024/06/09 13:25:52 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	dest = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	dest = ft_calloc(i + j + 1, sizeof(char));
	if (dest == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		dest[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		dest[j++] = s2[i++];
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	printf("%s\n", ft_strjoin("to je debil ", "to jsem nevidel"));
}*/
