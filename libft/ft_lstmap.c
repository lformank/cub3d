/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:39:26 by lformank          #+#    #+#             */
/*   Updated: 2025/01/29 14:17:47 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*del(void *lst)
{
	t_list	*ptr;

	ptr = (t_list *)lst;
	free((void *)lst);
	return ((void *)ptr);
}

void	*f(void *str)
{
	t_list	*temp;

	printf("str: %s", (char *)str);
	temp = (t_list *)str;
	temp->content = "hrozny";
	return ((void *)temp);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;

	if (!lst || !f || !del)
	{
		ft_lstclear(lst);
		return (NULL);
	}
	while (lst != 0)
	{
		temp = lst->content;
		f((void *)temp);
		newlst = ft_lstnew(temp->content);
	}
}
