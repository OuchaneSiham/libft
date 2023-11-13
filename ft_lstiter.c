/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:49:54 by souchane          #+#    #+#             */
/*   Updated: 2023/11/13 18:16:04 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL) 
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void	fffprint(void * content)
// {
// 	printf("%s\n", content);
// }
// // int main()
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
// // while (tm) 
// // {
// //     printf("%s \n", tm->content);
// //     tm= tm->next;
// // }
// ft_lstiter(h, fffprint); // i can test the func just with this line
// // tm = h;
// // while (tm)
// // {
// // printf("%s \n", tm->content);
// // tm= tm->next;
// // 	}
// // }