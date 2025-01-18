/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:53:45 by souchane          #+#    #+#             */
/*   Updated: 2025/01/04 18:28:15 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstnew(void *content)
{
	t_node	*head;

	head = malloc(sizeof(t_node));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
// int main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	node1 = ft_lstnew("1");
// 	node2 = ft_lstnew("2");
// 	node3 = ft_lstnew("3");

// 	node1 ->next = node2;
// 	node2 ->next = node3;

// 	t_list	*head = node1;

// 	while (head)
// 	{
// 	printf("%s\n", head ->content);
// 	head = head->next;
// 	}
// }