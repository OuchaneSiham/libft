/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:05:31 by souchane          #+#    #+#             */
/*   Updated: 2023/11/12 16:00:07 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
// int main()
// {
// 	t_list *h;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list *node4 ;
// 	node4 = ft_lstnew("20");
// 	node1 = ft_lstnew("1");
// 	node2 = ft_lstnew("2");
// 	node3 = ft_lstnew("3");
// 	 node1->next = node2;
//     node2->next = node3;
// 	node3->next = node4;
// 	h = node1;
// 	printf("%d\n", ft_lstsize(h));
// }