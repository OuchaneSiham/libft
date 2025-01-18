/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:06:51 by souchane          #+#    #+#             */
/*   Updated: 2025/01/04 18:27:54 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
// 	t_list *head;
// 	head = NULL;
// t_list	*node1;
// t_list	*node2;
// t_list	*node3;
// node1 = ft_lstnew("1");
// node2 = ft_lstnew("2");
// node3 = ft_lstnew("3");
// 	//  ft_lstadd_front(&head, node3);
// 	//  ft_lstadd_front(&head, node2);
// 	//  ft_lstadd_front(&head, node1);
// 	node1->next = node2;
// 	node2->next = node3;
// 	head = node1;
// 	t_list *tm = head;
//     while (tm)
// 	{
//         printf("%s \n",tm -> content );
//         tm= tm->next;
// 	}
// 	printf("last: %s\n", ft_lstlast(NULL));
// 	printf("last: %s\n", ft_lstlast(head) -> content);
// }