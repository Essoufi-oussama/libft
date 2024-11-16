/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessoufi <oessoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:16:09 by oessoufi          #+#    #+#             */
/*   Updated: 2024/11/07 15:52:51 by oessoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	size_t	i;
	size_t	nodes_count;
	t_list	*new_node;

	new_list = NULL;
	if (f == NULL || del == NULL || lst == NULL)
		return (NULL);
	i = 0;
	nodes_count = ft_lstsize(lst);
	while (i < nodes_count)
	{
		new_node = malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
		i++;
	}
	return (new_list);
}
