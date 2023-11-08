/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:12:29 by souchane          #+#    #+#             */
/*   Updated: 2023/11/04 15:53:39 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main() 
// { 
// 	int fd = open("siham", O_CREAT | O_APPEND | O_RDWR, 0777); 

// 	printf("fd = %d\n", fd); 
// 	ft_putchar_fd('s', fd);

// 	return 0; 
// }