/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:30:44 by lformank          #+#    #+#             */
/*   Updated: 2024/10/25 11:05:32 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = ft_lstlast(*lst);
	if (!temp)
		*lst = new;
	else
		temp->next = new;
}

/*int	main()
{
	t_list	*ptr;
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
	// printf("num%d: %s\n", 1, (char *)node1->content);
	// printf("num%d: %s\n", 2, (char *)node2->content);
	// printf("num%d: %s\n", 3, (char *)node3->content);
	// printf("num%d: %s\n", 4, (char *)node4->content);
	while (ptr)
	{
		printf("num%d: %s\n", i, (char *)ptr->content);
		i++;
		ptr = ptr->next;
	}
}*/