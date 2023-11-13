/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:34:37 by souchane          #+#    #+#             */
/*   Updated: 2023/11/13 15:42:15 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*s;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	s = *lst;
	while (s ->next != NULL)
	{
		s = s->next;
	}
	s->next = new;
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