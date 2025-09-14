/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lformank <lformank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:07:24 by lformank          #+#    #+#             */
/*   Updated: 2024/10/24 09:56:22 by lformank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	i = 0;
	ptr = (t_list *)malloc(sizeof(t_list));
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	free(ptr);
	return (i);
}

/*int main()
{
	t_list	*newone;
	t_list	*oldone;
	char	*newchar;
	char	*oldchar;
	int		i;

	newchar = "HEY BOY";
	oldchar = "HEY GIRL";
	oldone = (t_list *)malloc(sizeof(t_list));
	oldone->content = &oldchar;
	oldone->next = NULL;
	newone = (t_list *)malloc(sizeof(t_list));
	newone->content = &newchar;
	newone->next = oldone;
	ft_lstadd_front(&oldone, newone);
	i = ft_lstsize(newone);
	printf("%p\n", &newone);
	printf("%d\n", i);
	printf("%s\n", (char *)oldone->content);
}*/