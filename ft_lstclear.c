/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:24:14 by souchane          #+#    #+#             */
/*   Updated: 2025/01/04 18:27:17 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_node **lst, void (*del)(void *))
{
	t_node	*head;
	t_node	*tmp;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head != NULL)
	{
		tmp = head->next;
		ft_lstdelone(head, del);
		head = tmp;
	}
	*lst = NULL;
}
// int main()
// {
// 	t_list *h;
// 	h = NULL;
// t_list	*node1;
// t_list	*node2;
// t_list	*node3;
// node1 = ft_lstnew(strdup("1"));
// node2 = ft_lstnew(strdup("2"));
// node3 = ft_lstnew(strdup("3"));
//     ft_lstadd_back(&h, node1);
//     ft_lstadd_back(&h, node2);
//     ft_lstadd_back(&h, node3);
// 	t_list *tm = h;
//     while (tm)
// 	{
//         printf("%s \n", tm->content);
//         tm= tm->next;
// 	}
// 	ft_lstclear(&h, free);
// 	tm = h;
//     while (tm)
// 	{
//         printf("%s \n", tm->content);
//         tm= tm->next;
// 	}
// }