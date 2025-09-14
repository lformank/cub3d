/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:24:27 by lformank          #+#    #+#             */
/*   Updated: 2024/09/27 10:53:47 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	printf("%s\n", ft_strdup("hovinko"));	
	printf("%s\n", ft_strdup(""));
	printf("%s\n", strdup("hovinko"));
	printf("%s\n", strdup(""));
}*/
