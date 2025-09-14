/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:13:09 by lformank          #+#    #+#             */
/*   Updated: 2024/10/25 16:51:08 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*del(void *lst)
{
	t_list	*ptr;

	ptr = (t_list *)lst;
	free((void *)lst);
	return ((void *)ptr);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del((void *)lst);
}

/*int	main()
{
	t_list	*ptr;
	t_list	*node1;
	t_list	*node2;
	char	*str1 = "HEY 1";
	char	*str2 = "HEY 2";
	int		i;

	ptr = NULL;
	i = 1;
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	ft_lstadd_back(&ptr, node1);
	ft_lstadd_back(&ptr, node2);
	ft_lstdelone(node1, (void *)del);
	printf("num%d: %p\n", 1, node1->content);
	printf("num%d: %p\n", 2, node2->content);
	return (0);
}*/