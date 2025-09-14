/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:06:28 by lformank          #+#    #+#             */
/*   Updated: 2024/06/06 21:54:00 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("piticko", "alkohol", 5));
	printf("%d\n", ft_strncmp("alkohol", "alkohol", 5));
	printf("%d\n", ft_strncmp("piticko", "alkohol", 0));
	printf("%d\n", ft_strncmp("piticko", "", 5));
	printf("%d\n", ft_strncmp("", "alkohol", 5));
	printf("%d\n", strncmp("piticko", "alkohol", 5));
	printf("%d\n", strncmp("alkohol", "alkohol", 5));
	printf("%d\n", strncmp("piticko", "alkohol", 0));
	printf("%d\n", strncmp("piticko", "", 5));
	printf("%d\n", strncmp("", "alkohol", 5));
}*/
