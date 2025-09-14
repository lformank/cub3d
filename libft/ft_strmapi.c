/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:30:57 by lformank          #+#    #+#             */
/*   Updated: 2025/01/29 14:18:05 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_size(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	int		n;

	n = ft_str_size(s);
	str = malloc((n + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

/*char	f(unsigned int i, char c)
{
	char	str;
	str = c + i;
	return (str);
}

int	main(void)
{
	char	str1[] = "abc";
	char	*str2;

	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}*/
