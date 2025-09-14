/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:11:08 by lformank          #+#    #+#             */
/*   Updated: 2024/10/24 11:30:20 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*list1;

	if (!lst)
	{
		list1 = (t_list *)malloc(sizeof(t_list));
		if (!list1)
			free(list1);
		list1->content = NULL;
		list1->next = NULL;
		new->next = list1;
	}
	else
		new->next = *lst;
	*lst = new;
}

/*int	main()
{
	t_list	**lst;
	t_list	*newone;
	t_list	*oldone;
	char	*newchar;
	char	*oldchar;
	int		i;

	i = 0;
	lst = NULL;
	newchar = "HEY BOY";
	oldchar = "HEY GIRL";
	newone = (t_list *)malloc(sizeof(t_list));
	newone->content = &newchar;
	newone->next = NULL;
	oldone = (t_list *)malloc(sizeof(t_list));
	oldone->content = &oldchar;
	oldone->next = NULL;
	lst = &oldone;
	ft_lstadd_front(lst, newone);
	printf("%p\n", &newone);
	printf("%p\n", lst);
}*/