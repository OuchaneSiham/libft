/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:20:44 by souchane          #+#    #+#             */
/*   Updated: 2023/11/12 21:55:18 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del((lst ->content));
	free(lst);
}

// void del_content(void *content)
// {
//     free(content);
// }
// int main()
// {
// 	char *data = strdup("do not ,");
// 	// t_list *nd = ft_lstnew(data);
// 	t_list	*node1;
// 	node1 = ft_lstnew(data);
// // i should allocate the data first then i can free it
// 	printf("%s\n", node1 ->content);
// 	ft_lstdelone(node1, free);
// 	printf("%s\n", node1 ->content);
// 	// printf("%s\n", );
// }