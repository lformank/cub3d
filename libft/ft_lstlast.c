/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:38:09 by lformank          #+#    #+#             */
/*   Updated: 2024/10/24 11:29:05 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

// int main()
// {
// 	t_list	*newone;
// 	t_list	*oldone;
// 	t_list	*ptr;
// 	// t_list	*temp;
// 	// t_list	**dptr;
// 	char	*newchar;
// 	char	*oldchar;

// 	newchar = "I am new";
// 	oldchar = "I am old";
// 	newone = ft_lstnew(newchar);
// 	oldone = ft_lstnew(oldchar);
// 	// printf("3%p\n", newone);
// 	// printf("4%p\n", oldone);
// 	// dptr = NULL;
// 	// ft_lstadd_front(dptr, newone);
// 	// temp = oldone;
// 	// printf("1%p\n", newone);
// 	// printf("2%p\n", oldone);
// 	ptr = ft_lstlast(newone);
// 	printf("3%p\n", ptr);
// 	printf("4%p\n", oldone);
// 	return (0);
// }