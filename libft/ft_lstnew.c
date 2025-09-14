/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 09:53:34 by lformank          #+#    #+#             */
/*   Updated: 2024/10/23 08:39:43 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list1;

	list1 = (t_list *)malloc(sizeof(t_list));
	if (!list1)
	{
		free(list1);
		list1 = NULL;
		return (list1);
	}
	list1->content = content;
	list1->next = NULL;
	return (list1);
}

/*int	main()
{
	t_list	*list;
	void	*content = "OU sakra";

	list = ft_lstnew(content);
	printf("%p\n", list);
	printf("%p\n", list->content);
	printf("%p\n", &list->content);
	printf("%p\n", list->next);
	printf("%p\n", &list->next);
	return (0);
}*/
