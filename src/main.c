/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:25:59 by lformank          #+#    #+#             */
/*   Updated: 2025/09/14 17:33:46 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int ac, char **av)
{
	char **cub_file;

	if (ac != 2)
	{
		perror("Wrong number of arguments!\n");
		return 1;
	}
	cub_file = load(av[1]);
	if (!cub_file)
		return 1;
}