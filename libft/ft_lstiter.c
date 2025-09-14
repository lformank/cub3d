/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:18:48 by lformank          #+#    #+#             */
/*   Updated: 2024/10/25 16:47:35 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(void *str)
{
	printf("str: %s", (char *)str);
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	while (lst != NULL)
	{
		temp = lst->content;
		f(temp);
		lst = lst->next;
	}
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
	ptr = node1;
	ft_lstiter(ptr, (void *)f);
}*/