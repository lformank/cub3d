/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 11:34:58 by lformank          #+#    #+#             */
/*   Updated: 2024/06/19 17:07:40 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	else
		return (0);
}

/*int	main(void)
{
	const char	s[] = "praha je krasna";
	int	c = 'l';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
}*/
