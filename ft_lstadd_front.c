/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:03:39 by souchane          #+#    #+#             */
/*   Updated: 2025/01/04 18:27:08 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	t_list *h;
// 	h = NULL;
// t_list	*node1;
// t_list	*node2;
// t_list	*node3;
// node1 = ft_lstnew("1");
// node2 = ft_lstnew("2");
// node3 = ft_lstnew("3");
//     ft_lstadd_front(&h, node1);
//     ft_lstadd_front(&h, node2);
//     ft_lstadd_front(&h, node3);
// 	t_list *tm = h;
//     while (tm)
// 	{
//         printf("%s ", tm->content);
//         tm= tm->next;
// 	}
// }