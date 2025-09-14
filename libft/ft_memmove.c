/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:50:00 by lformank          #+#    #+#             */
/*   Updated: 2024/06/06 20:33:47 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*des;
	const char	*sr;

	des = (char *)dest;
	sr = (char *)src;
	if (des == 0 && src == 0)
		return (0);
	if (dest <= src)
	{
		while (n--)
		{
			*des++ = *sr++;
		}
	}
	else if (dest > src)
	{
		des = des + n - 1;
		sr = sr + n - 1;
		while (n--)
		{
			*des-- = *sr--;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "vdy";
	char	src[] = "pravdy";
	size_t	n = 2;

	puts(dest);
	ft_memmove(dest, src, n);
	puts(dest);
	memmove(dest, src, n);
	puts(dest);
	return (0);
}*/
