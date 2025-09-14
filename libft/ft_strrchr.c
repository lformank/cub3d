/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 10:36:27 by lformank          #+#    #+#             */
/*   Updated: 2024/06/19 17:16:24 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == (char)c)
		res = (char *)&s[i];
	return (res);
}

/*int	main(void)
{
	const char	s[] = "praha je krasna";
	int	c = 'l';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
}*/
