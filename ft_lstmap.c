/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:46:53 by souchane          #+#    #+#             */
/*   Updated: 2023/11/20 15:53:16 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	if (!lst || !del || !f)
		return (NULL);
	list = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}

// void	*fup(void *c)
// {
// 	char	*cc ;

// 	cc = (char *)c;
// 	cc[0]++;
// 	return (cc);
// }
// int main()
// {
// 	t_list *h;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	h = NULL;
// 	node1 = ft_lstnew(strdup("a"));
// 	node2 = ft_lstnew(strdup("b"));
// 	node3 = ft_lstnew(strdup("c"));
//     ft_lstadd_back(&h, node1);
//     ft_lstadd_back(&h, node2);
//     ft_lstadd_back(&h, node3);
// 	t_list *tm = h;
// 	while (tm) 
// 	{
// 		printf("%s \n", tm->content);
// 		tm = tm->next;
// 	}
// 	t_list *h2;
// 	h2 = ft_lstmap(h , fup,  free);
// 	printf("after ;\n");
// 	ft_lstiter(h2, fffprint);
// }