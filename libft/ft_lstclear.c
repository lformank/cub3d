/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:09:22 by lformank          #+#    #+#             */
/*   Updated: 2024/10/25 14:26:15 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
	*lst = NULL;
}

/*int	main()
{
	t_list	*ptr;
	t_list	**pptr;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	char	*str1 = "HEY 1";
	char	*str2 = "HEY 2";
	char	*str3 = "HEY 3";
	char	*str4 = "HEY 4";
	int		i;

	ptr = NULL;
	i = 1;
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	node4 = ft_lstnew(str4);
	ft_lstadd_back(&ptr, node1);
	ft_lstadd_back(&ptr, node2);
	ft_lstadd_back(&ptr, node3);
	ft_lstadd_back(&ptr, node4);
	pptr = &node1;
	ft_lstclear(pptr, (void *)del);
	while (ptr)
	{
		printf("main%d: %p\n", i, ptr->content);
		i++;
		ptr = ptr->next;
	}
}*/