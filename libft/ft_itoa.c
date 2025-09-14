/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:17:48 by lformank          #+#    #+#             */
/*   Updated: 2025/01/29 14:14:43 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_n_size(int n)
{
	int				i;
	unsigned int	num;

	i = 0;
	num = 0;
	if (n < 0)
	{
		num = -n;
		i++;
	}
	else
		num = n;
	if (n == 0)
		i++;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

static char	*transcription(int i, long int n, char *c)
{
	while (i >= 0 && n != 0)
	{
		c[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*c;
	unsigned int	num;

	num = 0;
	i = ft_n_size(n);
	c = (char *)malloc((i + 1) * sizeof(char));
	if (c == 0)
		return (0);
	if (n < 0)
	{
		c[0] = '-';
		num = -n;
	}
	else
		num = n;
	c[i] = '\0';
	i--;
	if (num == 0)
	{
		c[i] = 48;
		return (c);
	}
	transcription(i, num, c);
	return (c);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-12060));
	printf("%s\n", ft_itoa(8124));
	printf("%s\n", ft_itoa(9));
	printf("%s\n", ft_itoa(-10));
	printf("%s\n", ft_itoa(543000));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}*/
