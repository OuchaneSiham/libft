/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:29:23 by souchane          #+#    #+#             */
/*   Updated: 2023/11/04 16:34:40 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main() 
// { 
// 	int fd = open("siham", O_CREAT | O_APPEND | O_RDWR, 0777); 

// 	printf("fd = %d\n", fd); 
// 	ft_putendl_fd("souchane", fd);

// 	return 0; 
// }