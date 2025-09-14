/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 15:14:12 by lformank          #+#    #+#             */
/*   Updated: 2024/06/16 15:34:09 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

size_t	count(const char *s, char c)
{
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			o++;
		}
	}
	return (o);
}

char	*word_dp(const char *s, size_t st, size_t end)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((end - st + 1) * sizeof(char));
	while (st < end)
		word[i++] = s[st++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || s[i] == '\0') && index >= 0)
		{
			split[j++] = word_dp(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*int	main(void)
{
	char	**split(

	split
}*/
