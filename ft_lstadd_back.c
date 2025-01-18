/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:34:37 by souchane          #+#    #+#             */
/*   Updated: 2025/01/18 13:30:54 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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
//     ft_lstadd_back(&h, node1);
//     ft_lstadd_back(&h, node2);
//     ft_lstadd_back(&h, node3);
// 	t_list *tm = h;
//     while (tm)
// 	{
//         printf("%s ", tm->content);
//         tm= tm->next;
// 	}
// }