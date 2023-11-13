/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:03:39 by souchane          #+#    #+#             */
/*   Updated: 2023/11/12 18:11:21 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new ->next = *lst;
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