/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:11:33 by lformank          #+#    #+#             */
/*   Updated: 2025/09/14 17:41:57 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	**load(char *av)
{
	char	*buf[200];
	char	*ret;
	int		loaded;
	int		fd;

	loaded = -1;
	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		perror("Couldn't open the file!\n");
		return NULL;
	}
	while (loaded > 0)
	{
		loaded = read(fd, buf, O_RDONLY);
		if (loaded == -1)
		{
			if (ret)
				free(ret);
			if (buf)
				free(buf);
			perror("Couldn't read the file!\n");
			return NULL;
		}
		else if (loaded > 0)
			ret = ft_strjoin(ret, buf);
	}
	return ret;
}